#pragma once
#include "CoreMinimal.h"
#include "EMorMainMenuMode.h"
#include "MorMainMenuChangeModeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorMainMenuChangeModeDelegate, EMorMainMenuMode, NewMode, EMorMainMenuMode, FromMode);

