#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "WaypointIconSet.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FWaypointIconSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush WorldIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MapIcon;
    
    FWaypointIconSet();
};

