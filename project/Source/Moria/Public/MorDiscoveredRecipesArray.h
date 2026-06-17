#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorDiscoveredRecipe.h"
#include "MorDiscoveredRecipesArray.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredRecipesArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDiscoveredRecipe> Items;
    
public:
    MORIA_API FMorDiscoveredRecipesArray();
};

