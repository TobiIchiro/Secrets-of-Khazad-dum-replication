#pragma once
#include "CoreMinimal.h"
#include "OnCanAccessUserGeneratedContentChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCanAccessUserGeneratedContentChanged, bool, bNewAccess);

