#pragma once
#include "CoreMinimal.h"
#include "OnSliderValueChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSliderValueChange, float, sliderValue);

