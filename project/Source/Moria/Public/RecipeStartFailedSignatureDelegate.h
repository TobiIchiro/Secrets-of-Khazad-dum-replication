#pragma once
#include "CoreMinimal.h"
#include "ECraftFailureReason.h"
#include "MorItemRecipeRowHandle.h"
#include "RecipeStartFailedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecipeStartFailedSignature, const FMorItemRecipeRowHandle, RecipeHandle, TArray<ECraftFailureReason>, FailReasons);

