#pragma once
#include "CoreMinimal.h"
#include "OnPlayerReportCompletedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnPlayerReportCompletedDynamic, bool, bWasSuccessful, const FString&, Error);

