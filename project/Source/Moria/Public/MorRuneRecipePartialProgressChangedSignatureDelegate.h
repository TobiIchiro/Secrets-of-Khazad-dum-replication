#pragma once
#include "CoreMinimal.h"
#include "MorRuneDefinition.h"
#include "MorRuneRecipePartialProgressChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorRuneRecipePartialProgressChangedSignature, const FMorRuneDefinition&, RuneRecipe, const int32, NewProgress, const int32, OldProgress);

