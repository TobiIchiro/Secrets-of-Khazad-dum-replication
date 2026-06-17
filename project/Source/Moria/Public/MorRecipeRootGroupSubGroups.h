#pragma once
#include "CoreMinimal.h"
#include "MorCategoryTagDefinition.h"
#include "MorRecipeRootGroupSubGroups.generated.h"

USTRUCT(BlueprintType)
struct FMorRecipeRootGroupSubGroups {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorCategoryTagDefinition> SubGroups;
    
    MORIA_API FMorRecipeRootGroupSubGroups();
};

