#pragma once
#include "CoreMinimal.h"
#include "EMorMultiplayerNamesMode.h"
#include "OnMultiplayerNamesModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMultiplayerNamesModeChanged, EMorMultiplayerNamesMode, NewMode);

