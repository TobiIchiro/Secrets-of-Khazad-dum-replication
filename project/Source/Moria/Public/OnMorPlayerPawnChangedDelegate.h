#pragma once
#include "CoreMinimal.h"
#include "OnMorPlayerPawnChangedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMorPlayerPawnChanged, APawn*, OldPawn, APawn*, NewPawn);

