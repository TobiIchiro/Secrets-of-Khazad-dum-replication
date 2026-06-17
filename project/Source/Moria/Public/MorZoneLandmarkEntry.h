#pragma once
#include "CoreMinimal.h"
#include "EZoneBubblePlacement.h"
#include "MorLandmarkRowHandle.h"
#include "MorZoneLandmarkEntry.generated.h"

USTRUCT(BlueprintType)
struct FMorZoneLandmarkEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorLandmarkRowHandle Landmark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZoneBubblePlacement Placement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtendedConnectivityLandmark;
    
    MORIA_API FMorZoneLandmarkEntry();
};

