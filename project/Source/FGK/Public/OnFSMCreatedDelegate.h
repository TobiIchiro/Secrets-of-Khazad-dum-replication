#pragma once
#include "CoreMinimal.h"
#include "OnFSMCreatedDelegate.generated.h"

class UFGKState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFSMCreated, UFGKState*, Root);

