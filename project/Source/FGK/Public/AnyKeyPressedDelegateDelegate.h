#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "AnyKeyPressedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAnyKeyPressedDelegate, const FKey&, Key);

