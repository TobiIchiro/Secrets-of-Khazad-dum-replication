#pragma once
#include "CoreMinimal.h"
#include "MorItemRecipeDefinition.h"
#include "MorItemRecipePartialProgressChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorItemRecipePartialProgressChangedSignature, const FMorItemRecipeDefinition&, ItemRecipe, const int32, NewProgress, const int32, OldProgress);

