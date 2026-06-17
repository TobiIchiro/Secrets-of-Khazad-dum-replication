#pragma once
#include "CoreMinimal.h"
#include "MorConstructionRowHandle.h"
#include "MorCraftingStationRecipeInfo.h"
#include "MorCraftingStationData.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCraftingStationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionRowHandle ConstructionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBreadCrumpToShow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorCraftingStationRecipeInfo> DiscoveredRecipes;
    
public:
    FMorCraftingStationData();
};

