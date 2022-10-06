package com.Plugins.MobileNativeCode;//Use only this package, do not change it!!!

import android.app.Activity;
import android.support.annotation.Keep;

// get cache dir
import android.os.Environment;

//import File
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

import com.epicgames.ue4.GameActivity;

//Android Context
import android.content.Context;

//Android Intent
import android.content.Intent;

//Android Gallery
import android.provider.MediaStore;
import android.net.Uri;
import android.content.ContentUris;
import android.view.View;
import android.widget.ImageView;


//Android Toast
import android.widget.Toast;

//Android Database 
import android.database.Cursor;

//Android image
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.content.ContentResolver;
import java.io.ByteArrayOutputStream;

@Keep
public class asyncAndroidFunctionLibClass {

	static Activity GameActivity;

	//Calling *.cpp code
	@Keep
	public static native void CallBackAndroidForImage(String returnStr);

	// Calling Java code asynchronously and returning the value back to C++
	@Keep
	public static void CallBackFunction(final Activity activity) {
		
		GameActivity = activity;
		activity.runOnUiThread(new Runnable() {
			@Override
			public void run()
			{
				CallBackAndroidForImage("CallBack");
			}
		});
	}

	@Keep
	public static void saveBitmapToPng(Activity activity, String AppName, String ImageName, Bitmap bitmap)
	{	
		GameActivity = activity;
		File savefile = new File(activity.getApplicationContext().getExternalCacheDir().getAbsolutePath() +"/" + "new_" + ImageName + ".png");
		
		
		try
		{
			showToast("Path: " + "/storage/emulated/0/Android/data/"+ AppName +"/SaveGames/" + "new_" + ImageName + ".png");
			savefile.createNewFile();
			
			FileOutputStream fos = new FileOutputStream(savefile);
			
			bitmap.compress(Bitmap.CompressFormat.PNG, 100, fos);

			fos.close();
		}
		catch(Exception e)
		{
		}

		CallBackFunction(activity);
	}
	
	@Keep
	public static void sendPictureToApplicationPath(Activity activity, String AppName, Uri imgUri) 
	{
		GameActivity = activity;
		String imagePath =  getPath(imgUri);
		showToast(imagePath);
		
		String ImageName = null;
		int cut = imagePath.lastIndexOf('/');
		if (cut != -1) 
		{
			ImageName = imagePath.substring(cut + 1);

			int parse = ImageName.lastIndexOf('.');
			ImageName = ImageName.substring(0, parse);
			showToast("ImageName is" + ImageName);
		}
		else
		{
			showToast("Fail to find image");
			return;
		}

		try
		{
			ContentResolver resolver = activity.getApplicationContext().getContentResolver();
			InputStream instream = resolver.openInputStream(imgUri);
			Bitmap imgBitmap = BitmapFactory.decodeStream(instream);
			instream.close();
			saveBitmapToPng(activity, AppName, ImageName, imgBitmap);
		}
		catch (Exception e)
		{
			showToast("Fail to decode Bitmap");
		}

	}

	@Keep
	public static void showToast(final String msg)
	{
		GameActivity.runOnUiThread(new Runnable()
		{
			@Override
			public void run()
			{
				Toast.makeText(GameActivity.getApplicationContext(), msg, Toast.LENGTH_SHORT).show();
			}
		});
	}

	@Keep
	public static String getPath(Uri uri) 
	{
		//showToast("GetPath");
		String result;
		Cursor cursor = GameActivity.getApplicationContext().getContentResolver().query(uri, null, null, null, null);
		
		if (cursor == null) 
		{ // Source is Dropbox or other similar local file path
			//showToast("CursorNULL");
			result = uri.getPath();
		} else 
		{
			//showToast("CursorNotNULL");
			cursor.moveToFirst();
			int idx = cursor.getColumnIndex(MediaStore.Images.ImageColumns.DATA);
			result = cursor.getString(idx);
			cursor.close();
		}
		//showToast("REsult");
		return result;
	}


	//This function is called in Blueprint + Do not use korean
	@Keep
	public static void GalleryOpen(Activity activity)
	{
		GameActivity = activity;

		//showToast("GalleryOpen");
		// Set Intent. Intent is a container used to exchange information between activities.
		Intent intent = new Intent( Intent.ACTION_PICK, android.provider.MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
		
		//showToast("StartAct");
		// Sending intent to game activity. This method is not recommended. You should create a Result function in each activity.
		// Code must be added to the result function with the xml command in MobileNativeCode_UPL_Android.
		activity.startActivityForResult(intent,1723828);

	}

}


