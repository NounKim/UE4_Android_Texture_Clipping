// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Android_Image_Reader.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Runtime/Engine/Public/TextureResource.h"
#include "Runtime/Engine/Public/HighResScreenshot.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"

#include "Kismet/KismetRenderingLibrary.h"

#include "HAL/FileManager.h"

void UCPP_Android_Image_Reader::GetImageSearchPath(FString& Path)
{


#if PLATFORM_ANDROID

	//Path =  FString::Printf(TEXT("/storage/emulated/0/Android/data/%s/SaveGames/"), *UKismetSystemLibrary::GetGameBundleId());
	Path = FString::Printf(TEXT("/storage/emulated/0/Android/data/%s/cache/"), *UKismetSystemLibrary::GetGameBundleId());


#elif PLATFORM_WINDOWS

	// 저장할 폴더 디렉터리
	FString FileDir = FPaths::ProjectSavedDir() + "Image/";
	FPaths::NormalizeDirectoryName(FileDir);
	Path = FString(FPaths::ConvertRelativePathToFull(FileDir));

#endif
}

//In the plugin native code, when copying a file from the gallery to the cache folder, the file is copied by appending new to the name.
void UCPP_Android_Image_Reader::GetImageList(const FString Path, TArray<FString>& FileNames, FString& NewFileName)
{
	FString Extension = TEXT("*.png");
	TArray<FString> InstFileNames;
	IFileManager::Get().FindFiles(InstFileNames, *Path, *Extension);

	static const FString NewContains(TEXT("new"));

	//The process of removing 'new' from a file name
	for (auto k : InstFileNames)
	{
		if (k.Contains("new"))
		{
			//TArray<FString> ParseArray;
			//k.ParseIntoArray(ParseArray, TEXT("_"));
			//NewFileName = ParseArray.Last();
			FString Left;
			FString Right;

			k.Split("new_", &Left, &Right);
			NewFileName = *Right;

			UE_LOG(LogTemp, Warning, TEXT("Right %s"), *Right);
			UE_LOG(LogTemp, Warning, TEXT("NewFileName %s"), *NewFileName);

			// "/"
			FString OldFilePath = Path + k;
			FString NewFilePath = Path + NewFileName;

			if (IFileManager::Get().Copy(*NewFilePath, *OldFilePath) == 0)
			{
				UE_LOG(LogTemp, Warning, TEXT("CopySuccess"));
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("CopyFailed"));
				return;
			}

			if (IFileManager::Get().Delete(*OldFilePath))
			{
				UE_LOG(LogTemp, Warning, TEXT("DeleteSuccess"));
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("DeleteFailed"));
				return;
			}
		}
	}
	IFileManager::Get().FindFiles(FileNames, *Path, *Extension);
}

UTexture2D* UCPP_Android_Image_Reader::ReturnImageTexture2D(const FString& FileName, bool& IsValid, int32& Width, int32& Height)
{

	//Probably the original code is Rama's code.

	IsValid = false;
	FString GetImageName;
	GetImageSearchPath(GetImageName);

	//texture2d to return
	UTexture2D* LoadedT2D = NULL;

	//get ImageWrapper module
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));

	//Convert png or jpg files to raw array
	TArray<uint8> RawFileData;
	FString FullFilePath = GetImageName + FileName; // "/"

	// Returns null if there is no file with the name corresponding to the path.
	// try get image to RawfileData in the file path
	if (!FFileHelper::LoadFileToArray(RawFileData, *FullFilePath))
	{
		return NULL;
	}

	//create image wrapper
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageWrapperModule.DetectImageFormat(RawFileData.GetData(), RawFileData.Num()));

	//UE_LOG(LogTemp, Error, TEXT("FileDir %s"), *FullFilePath);

	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		TArray<uint8> UncompressedBRGA;
		//const TArray<uint8>* OutRawData = NULL;

		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, (int32)8, UncompressedBRGA))
		{
			// size and type definition. init
			LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

			if (!LoadedT2D)
			{
				return NULL;
			}

			Width = ImageWrapper->GetWidth();
			Height = ImageWrapper->GetHeight();

			// convert bulkdata to texture2d
			// lock for data protection
			void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);

			FMemory::Memcpy(TextureData, UncompressedBRGA.GetData(), UncompressedBRGA.Num());

			// work end. unlock memory
			LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

			LoadedT2D->UpdateResource();
		}
	}

	IsValid = true;

	return LoadedT2D;
}

TArray<UTexture2D*> UCPP_Android_Image_Reader::ReturnImageTexture2D_Array(TArray<FString> FileNames)
{
	TArray<UTexture2D*> Textures;
	bool InstBoolean = true;
	int32 InstInteger = 0;

	for (auto k : FileNames)
	{
		Textures.Add(ReturnImageTexture2D(k, InstBoolean, InstInteger, InstInteger));
	}
	return Textures;
}




