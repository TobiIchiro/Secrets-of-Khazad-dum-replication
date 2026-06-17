#pragma once
#include "CoreMinimal.h"
#include "MorAchievementRowHandle.h"
#include "MorAchievementUnlockedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorAchievementUnlockedSignature, const FMorAchievementRowHandle&, AchievementRowHandle);

