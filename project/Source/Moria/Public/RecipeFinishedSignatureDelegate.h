#pragma once
#include "CoreMinimal.h"
#include "MorItemRecipeRowHandle.h"
#include "RecipeFinishedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecipeFinishedSignature, const FMorItemRecipeRowHandle, RecipeHandle, bool, bAllCraftingFinished);

