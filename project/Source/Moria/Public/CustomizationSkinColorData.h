#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorCustomizationTableRowBase.h"
#include "CustomizationSkinColorData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationSkinColorData : public FMorCustomizationTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkinColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ScarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UI_Icon_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDarkDiffuseTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDarkSubsurfaceProfileOverride;
    
    MORIA_API FCustomizationSkinColorData();
};

