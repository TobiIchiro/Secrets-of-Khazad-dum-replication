#pragma once
#include "CoreMinimal.h"
#include "MorAchievementRowHandle.h"
#include "MorAchievementProgressSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorAchievementProgressSignature, const FMorAchievementRowHandle&, AchievementRowHandle, int32, Progress, int32, ProgressNeeded);

