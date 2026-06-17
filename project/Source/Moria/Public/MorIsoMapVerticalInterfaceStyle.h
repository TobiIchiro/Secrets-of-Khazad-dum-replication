#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMorIsoMapVerticalInterfaceHatchVisibility.h"
#include "MorIsoMapVerticalLineStyle.h"
#include "MorIsoMapVerticalInterfaceStyle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorIsoMapVerticalInterfaceStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterfaceTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapVerticalLineStyle LineStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint BottomHatchAtlasTileCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BottomHatchTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint TopHatchAtlasTileCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TopHatchTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorIsoMapVerticalInterfaceHatchVisibility HatchVisibility;
    
    FMorIsoMapVerticalInterfaceStyle();
};

