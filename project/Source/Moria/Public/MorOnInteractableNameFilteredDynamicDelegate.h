#pragma once
#include "CoreMinimal.h"
#include "MorOnInteractableNameFilteredDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FMorOnInteractableNameFilteredDynamic, bool, bSuccess, const FText&, ResultName);

