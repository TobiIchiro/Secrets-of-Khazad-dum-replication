#pragma once
#include "CoreMinimal.h"
#include "RecipeLearnedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecipeLearnedSignature, const FName&, RecipeName);

