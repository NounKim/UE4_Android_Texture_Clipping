// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "CPP_PublicBPLib.generated.h"


/**
 * 
 */
UCLASS()
class IMAGE_MAKER_API UCPP_PublicBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	int a;

	UFUNCTION(BlueprintCallable, Category = "Profile_Image_Clipping", Meta = (WorldContext = "WorldContextObject", DisplayName = "Profile_Image_Clipping"))
		static UTexture2D* Clipping_Texture(const FString& FileName, FVector2D Position, int32 Width, int32 Height, bool& IsValid);


	UFUNCTION(BlueprintCallable, Category = "TextureToBuffer", Meta = (DisplayName = "Texture2d To TArray Buffer"))
		static TArray<uint8> TextureToBuffer(UTexture2D* Orginal_Texture);

	UFUNCTION(BlueprintCallable, Category = "PositionChanger", meta = (WorldContext = "WorldContextObject"))
		static FVector2D GetTouchPositionOnViewport(UObject* WorldContextObject, float TouchPosition_X, float TouchPosition_Y);

	UFUNCTION(BlueprintCallable, Category = "PositionChanger", meta = (WorldContext = "WorldContextObject"))
		static void SetCursorPosOnWidget(UObject* WorldContextObject, float TouchPosition_X, float TouchPosition_Y);
};
