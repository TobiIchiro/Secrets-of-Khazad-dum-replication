#pragma once
#include "CoreMinimal.h"
#include "FGKPopupButtonUsedDelegate.generated.h"

class UFGKPopup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFGKPopupButtonUsed, UFGKPopup*, PopupInstance);

