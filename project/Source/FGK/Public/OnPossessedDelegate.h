#pragma once
#include "CoreMinimal.h"
#include "OnPossessedDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPossessed, AController*, Controller);

