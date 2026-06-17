#pragma once
#include "CoreMinimal.h"
#include "ExpeditionPlayerCountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExpeditionPlayerCountDelegate, int32, NewNumberOfPlayers);

