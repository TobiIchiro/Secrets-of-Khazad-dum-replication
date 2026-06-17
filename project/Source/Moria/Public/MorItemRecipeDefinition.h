#pragma once
#include "CoreMinimal.h"
#include "MorAnyItemRowHandle.h"
#include "MorConstructionRowHandle.h"
#include "MorRecipeDefinition.h"
#include "MorItemRecipeDefinition.generated.h"

class AMorCraftReceiver;

USTRUCT(BlueprintType)
struct MORIA_API FMorItemRecipeDefinition : public FMorRecipeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAnyItemRowHandle ResultItemHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CraftTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBePinned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorConstructionRowHandle> CraftingStations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorCraftReceiver> DestinationContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNpcOnlyRecipe;
    
    FMorItemRecipeDefinition();
};

