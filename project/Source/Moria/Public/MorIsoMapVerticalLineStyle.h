#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorIsoMapMarkerConfigBase.h"
#include "MorIsoMapVerticalLineStyle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorIsoMapVerticalLineStyle : public FMorIsoMapMarkerConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint TopAtlasTileCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint MiddleAtlasTileCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint BottomAtlasTileCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleToRoundTiles;
    
    FMorIsoMapVerticalLineStyle();
};

