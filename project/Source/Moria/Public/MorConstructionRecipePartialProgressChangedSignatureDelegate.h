#pragma once
#include "CoreMinimal.h"
#include "MorConstructionRecipeDefinition.h"
#include "MorConstructionRecipePartialProgressChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorConstructionRecipePartialProgressChangedSignature, const FMorConstructionRecipeDefinition&, ConstructionRecipe, const int32, NewProgress, const int32, OldProgress);

