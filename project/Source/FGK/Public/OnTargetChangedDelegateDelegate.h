#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "OnTargetChangedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTargetChangedDelegate, TEnumAsByte<ETeamAttitude::Type>, Type, AActor*, NewTarget, AActor*, OldTarget);

