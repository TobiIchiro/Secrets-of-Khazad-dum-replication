#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorPartialRecipe.h"
#include "MorDiscoveredPartialRecipesArray.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredPartialRecipesArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorPartialRecipe> Items;
    
public:
    MORIA_API FMorDiscoveredPartialRecipesArray();
};

