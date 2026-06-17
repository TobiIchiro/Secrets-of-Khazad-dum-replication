#pragma once
#include "CoreMinimal.h"
#include "EMapTableState.h"
#include "ExpeditionTableStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExpeditionTableStateDelegate, EMapTableState, TableState);

