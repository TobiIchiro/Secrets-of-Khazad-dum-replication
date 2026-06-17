#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorWaypointRowHandle.h"
#include "MorLandmarkWaypointProperties.generated.h"

USTRUCT(BlueprintType)
struct FMorLandmarkWaypointProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropertiesWereSetFromBubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TriggerExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InBubblePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscoverWaypointOnEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWaypointRowHandle WaypointRowHandle;
    
    MORIA_API FMorLandmarkWaypointProperties();
};

