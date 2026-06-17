#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BubbleInterfaceLocator.h"
#include "EMorBubbleOrientation.h"
#include "MorZoneTemplateBubbleEntry.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneTemplateBubbleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector ZoneCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorBubbleOrientation Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZoneEntrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBubbleInterfaceLocator> ClosedInterfaces;
    
    FMorZoneTemplateBubbleEntry();
};

