#include "CPP_PublicBPLib.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "ImageUtils.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "../Holdem_Mobile_Image_Reader/CPP_Android_Image_Reader.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Layout/Geometry.h"
#include"Kismet/KismetInputLibrary.h"
//#include "Framework/Application/SlateApplication.h"

UTexture2D* UCPP_PublicBPLib::Clipping_Texture(const FString& FileName, FVector2D Position, int32 Width, int32 Height, bool& IsValid)
{
	//UTexture2D* ReturnValue = nullptr;

	//Probably the original code is Rama's code.

	IsValid = false;
	FString GetImageName;
	UCPP_Android_Image_Reader::GetImageSearchPath(GetImageName);

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
			LoadedT2D = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);

			if (!LoadedT2D)
			{
				return NULL;
			}

			int32 TextureWidth = ImageWrapper->GetWidth();

			// convert bulkdata to texture2d
			// lock for data protection
			void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);

			TArray<uint8> CopiedArray;
			CopiedArray.SetNumUninitialized(Width*Height*4);
			//UE_LOG(LogTemp, Warning, TEXT("Orginal Image Width: %d, Height: %d"), ImageWrapper->GetWidth(), ImageWrapper->GetHeight());
			//UE_LOG(LogTemp, Warning, TEXT("Cop Length: %d"), CopiedArray.Num());
			//UE_LOG(LogTemp, Warning, TEXT("Unc Length: %d"), UncompressedBRGA.Num());


			for (int32 Y = Position.Y; Y < Position.Y + Width; Y++)//Height
			{
				//UE_LOG(LogTemp, Warning, TEXT("Y: %d"), Y);
				int32 CopiedTextureBufferIndex = (Y - Position.Y) * Width * 4;
				if (CopiedArray.IsValidIndex(CopiedTextureBufferIndex))
				{
					int32 OrginalTextureBufferIndex = (Y * TextureWidth + Position.X) * 4;
					if (UncompressedBRGA.IsValidIndex(OrginalTextureBufferIndex))
					{
						FMemory::Memcpy(&CopiedArray[CopiedTextureBufferIndex], &UncompressedBRGA[OrginalTextureBufferIndex], Width * 4); // uint8* TArray<uint8>.
					}
					else
					{
						UE_LOG(LogTemp, Warning, TEXT("UncompressedBRGA NotValid: Y: %d OrginalTextureBufferIndex: %d"), Y, OrginalTextureBufferIndex);

					}
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("CopiedArray NotValid: Y: %d CopiedTextureBufferIndex: %d"), Y , CopiedTextureBufferIndex);
				}
		}
			FMemory::Memcpy(TextureData, CopiedArray.GetData(), CopiedArray.Num());

			// work end. unlock memory
			LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

			LoadedT2D->UpdateResource();
		}
	}

	IsValid = true;

	return LoadedT2D;

}

TArray<uint8> UCPP_PublicBPLib::TextureToBuffer(UTexture2D* Orginal_Texture)
{
    TArray<uint8> ReturnBuffer;
    void* MipData = Orginal_Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
   
    ReturnBuffer.SetNumUninitialized((Orginal_Texture->GetSizeX()) * (Orginal_Texture->GetSizeY()));
    FMemory::Memcpy(ReturnBuffer.GetData(), MipData, ReturnBuffer.GetAllocatedSize());

    Orginal_Texture->PlatformData->Mips[0].BulkData.Unlock();


    return ReturnBuffer;


    //return TArray<uint8>();
}

FVector2D UCPP_PublicBPLib::GetTouchPositionOnViewport(UObject* WorldContextObject, float TouchPosition_X, float TouchPosition_Y)
{
	
	if (FSlateApplication::IsInitialized())
	{
		/*FVector2D TouchPosition;
		TouchPosition.X = TouchPosition_X;
		TouchPosition.Y = TouchPosition_Y;*/

		FVector2D TouchPosition = FSlateApplication::Get().GetCursorPos();
		
		FGeometry ViewportGeometry = UWidgetLayoutLibrary::GetViewportWidgetGeometry(WorldContextObject);
		return ViewportGeometry.AbsoluteToLocal((FVector2D)TouchPosition);
	}

	return FVector2D(0, 0);
}

void UCPP_PublicBPLib::SetCursorPosOnWidget(UObject* WorldContextObject, float TouchPosition_X, float TouchPosition_Y)
{
	FVector2D TouchPosition;
	TouchPosition.X = TouchPosition_X;
	TouchPosition.Y = TouchPosition_Y;
	
	//FSlateApplication SlateApp;

	FSlateApplication::Get().SetCursorPos(TouchPosition);
}
