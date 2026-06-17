#pragma once
#include "CoreMinimal.h"
#include "MorRuneDefinition.h"
#include "MorRuneRecipeLearnedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorRuneRecipeLearnedSignature, const FMorRuneDefinition&, RuneRecipe);

