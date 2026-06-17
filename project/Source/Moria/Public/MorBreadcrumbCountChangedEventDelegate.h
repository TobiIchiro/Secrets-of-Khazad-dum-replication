#pragma once
#include "CoreMinimal.h"
#include "MorBreadcrumbCountChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FMorBreadcrumbCountChangedEvent, int32, OldCount, int32, NewCount);

