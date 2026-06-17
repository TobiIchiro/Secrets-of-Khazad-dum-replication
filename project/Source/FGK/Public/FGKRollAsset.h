#pragma once
#include "CoreMinimal.h"
#include "EFGKOverlayState.h"
#include "FGKLocomotionAsset.h"
#include "FGKRollAsset.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKRollAsset : public FFGKLocomotionAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFGKOverlayState> OverlayStates;
    
    FFGKRollAsset();
};

