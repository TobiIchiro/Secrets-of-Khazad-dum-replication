#pragma once
#include "CoreMinimal.h"
#include "MorConstructionRecipeRowHandle.h"
#include "OnSelectionChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectionChangedSignature, const FMorConstructionRecipeRowHandle&, RecipeHandle);

