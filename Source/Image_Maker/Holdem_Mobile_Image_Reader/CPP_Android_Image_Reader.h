// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CPP_Android_Image_Reader.generated.h"

/**
 * 
 */
UCLASS()
class IMAGE_MAKER_API UCPP_Android_Image_Reader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/*Get the cache folder path of the project*/
	UFUNCTION(BlueprintPure, Category = "Android_Image_Reader", Meta = (DisplayName = "Get Android Image Search Path"))
		static void GetImageSearchPath(FString& Path);
	
	/*Get all file names inside cache folder + new files have 'new' in their name*/
	UFUNCTION(BlueprintCallable, Category = "Android_Image_Reader", Meta = (DisplayName = "Get Android Image File Names"))
		static void GetImageList(const FString Path, TArray<FString>& FileNames, FString& NewFileName);

	/*A function that receives the file name inside the cache folder and returns it as texture2d.*/
	UFUNCTION(BlueprintCallable, Category = "Android_Image_Reader", Meta = (DisplayName = "Get Android Image to Texture2D"))
		static UTexture2D* ReturnImageTexture2D (const FString& FileName, bool& IsValid, int32& Width, int32& Heigh);

	/*A function that returns all files in the cache folder by replacing them with texture2d.*/
	UFUNCTION(BlueprintCallable, Category = "Android_Image_Reader", Meta = (DisplayName = "Get Android Images to Texture2Ds"))
		static TArray<UTexture2D*> ReturnImageTexture2D_Array (TArray<FString> FileNames);


};
