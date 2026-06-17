#pragma once
#include "CoreMinimal.h"
#include "MorNpcUpdateNameDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorNpcUpdateName, FText, NpcName);

