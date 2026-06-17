#pragma once
#include "CoreMinimal.h"
#include "EMorMultiplayerSessionMode.h"
#include "OnMultiplayerSessionModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMultiplayerSessionModeChanged, EMorMultiplayerSessionMode, NewMode);

