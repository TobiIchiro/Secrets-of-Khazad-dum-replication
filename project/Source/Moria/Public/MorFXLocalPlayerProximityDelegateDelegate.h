#pragma once
#include "CoreMinimal.h"
#include "MorFXLocalPlayerProximityDelegateDelegate.generated.h"

class UMorFXLocalPlayerProximityComp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorFXLocalPlayerProximityDelegate, UMorFXLocalPlayerProximityComp*, Component);

