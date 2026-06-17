#pragma once
#include "CoreMinimal.h"
#include "EFGKOverlayState.h"
#include "FGKLocomotionAsset.h"
#include "Templates/SubclassOf.h"
#include "FGKGetUpAsset.generated.h"

class UFGKState;

USTRUCT(BlueprintType)
struct FGK_API FFGKGetUpAsset : public FFGKLocomotionAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFGKOverlayState> OverlayStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKState> ReactState;
    
    FFGKGetUpAsset();
};

