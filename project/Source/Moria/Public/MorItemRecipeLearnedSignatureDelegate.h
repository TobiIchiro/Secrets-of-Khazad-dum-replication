#pragma once
#include "CoreMinimal.h"
#include "MorItemRecipeDefinition.h"
#include "MorItemRecipeLearnedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorItemRecipeLearnedSignature, const FMorItemRecipeDefinition&, ItemRecipe);

