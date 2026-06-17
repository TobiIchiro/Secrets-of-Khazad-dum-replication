#pragma once
#include "CoreMinimal.h"
#include "MorItemRecipeDefinition.h"
#include "MorCraftingScreenRecipesList.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCraftingScreenRecipesList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorItemRecipeDefinition> Recipes;
    
    FMorCraftingScreenRecipesList();
};

