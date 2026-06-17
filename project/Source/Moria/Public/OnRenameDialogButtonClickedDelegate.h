#pragma once
#include "CoreMinimal.h"
#include "EMorRenameDialogButtonsTypes.h"
#include "OnRenameDialogButtonClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRenameDialogButtonClicked, EMorRenameDialogButtonsTypes, ButtonType);

