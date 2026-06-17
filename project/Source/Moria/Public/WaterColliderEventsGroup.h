#pragma once
#include "CoreMinimal.h"
#include "WaterColliderEventAssets.h"
#include "WaterColliderEventsGroup.generated.h"

USTRUCT(BlueprintType)
struct FWaterColliderEventsGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterColliderEventAssets SplashAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterColliderEventAssets DripAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterColliderEventAssets BreachAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterColliderEventAssets SubmergedMotionAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterColliderEventAssets PlungeAssets;
    
public:
    MORIA_API FWaterColliderEventsGroup();
};

