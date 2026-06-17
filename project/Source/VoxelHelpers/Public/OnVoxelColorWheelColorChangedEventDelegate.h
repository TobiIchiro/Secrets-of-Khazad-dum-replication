#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnVoxelColorWheelColorChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVoxelColorWheelColorChangedEvent, const FLinearColor&, NewColor);

