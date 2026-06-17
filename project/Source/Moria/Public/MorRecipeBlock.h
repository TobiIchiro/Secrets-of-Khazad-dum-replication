#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MorCategoryTagDefinition.h"
#include "MorConstructionRecipeDefinition.h"
#include "MorRecipeBlock.generated.h"

USTRUCT(BlueprintType)
struct FMorRecipeBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorCategoryTagDefinition CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorConstructionRecipeDefinition> Variants;
    
    MORIA_API FMorRecipeBlock();
};

