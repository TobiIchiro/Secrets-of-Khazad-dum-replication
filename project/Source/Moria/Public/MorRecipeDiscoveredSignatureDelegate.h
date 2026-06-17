#pragma once
#include "CoreMinimal.h"
#include "MorRecipeDiscoveredSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorRecipeDiscoveredSignature, const FName&, RecipeName);

