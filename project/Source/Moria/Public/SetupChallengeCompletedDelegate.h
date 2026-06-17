#pragma once
#include "CoreMinimal.h"
#include "SetupChallengeCompletedDelegate.generated.h"

class UMorSetupChallengeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetupChallengeCompleted, UMorSetupChallengeComponent*, ChallengeComponent);

