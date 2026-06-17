#pragma once
#include "CoreMinimal.h"
#include "MorItemRecipeRowHandle.h"
#include "RecipeStartedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecipeStartedSignature, const FMorItemRecipeRowHandle, RecipeHandle);

