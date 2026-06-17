#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorLandmarkContainer.h"
#include "MorWorldLayoutBubbleData.h"
#include "MorWorldLayoutModel.generated.h"

class UWorldLayoutZone;

USTRUCT(BlueprintType)
struct MORIA_API FMorWorldLayoutModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, FMorWorldLayoutBubbleData> BubbleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorWorldLayoutBubbleData> LockedBubbleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UWorldLayoutZone*> Zones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorLandmarkContainer Landmarks;
    
    FMorWorldLayoutModel();
};

