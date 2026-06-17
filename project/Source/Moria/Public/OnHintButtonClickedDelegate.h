#pragma once
#include "CoreMinimal.h"
#include "EMorButtonsTypes.h"
#include "OnHintButtonClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHintButtonClicked, EMorButtonsTypes, ButtonType);

