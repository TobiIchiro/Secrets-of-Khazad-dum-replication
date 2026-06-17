#pragma once
#include "CoreMinimal.h"
#include "MorConstructionRecipeRowHandle.h"
#include "OnBuildFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildFinished, const FMorConstructionRecipeRowHandle&, RecipeHandle);

