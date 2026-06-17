#pragma once
#include "CoreMinimal.h"
#include "OnTeleportFinishedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeleportFinished, AActor*, InSelf);

