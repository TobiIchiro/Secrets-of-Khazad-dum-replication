#pragma once
#include "CoreMinimal.h"
#include "MorItemDefinition.h"
#include "MorCosmeticStatusUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorCosmeticStatusUpdate, const FMorItemDefinition&, ItemDefinition, bool, bUsable);

