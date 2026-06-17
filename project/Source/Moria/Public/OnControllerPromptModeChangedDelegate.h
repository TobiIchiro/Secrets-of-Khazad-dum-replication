#pragma once
#include "CoreMinimal.h"
#include "EMorControllerPromptOptions.h"
#include "OnControllerPromptModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnControllerPromptModeChanged, EMorControllerPromptOptions, ModeOption);

