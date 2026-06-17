#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MeleeHitInfo.h"
#include "MeleeHitDetectedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMeleeHitDetectedDelegate, int32, HitIndex, FMeleeHitInfo&, HitInfo, FHitResult&, Hit);

