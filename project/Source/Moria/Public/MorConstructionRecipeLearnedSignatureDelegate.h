#pragma once
#include "CoreMinimal.h"
#include "MorConstructionRecipeDefinition.h"
#include "MorConstructionRecipeLearnedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorConstructionRecipeLearnedSignature, const FMorConstructionRecipeDefinition&, ConstructionRecipe);

