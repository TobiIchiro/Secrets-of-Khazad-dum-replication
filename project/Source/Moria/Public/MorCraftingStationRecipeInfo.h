#pragma once
#include "CoreMinimal.h"
#include "MorItemRecipeRowHandle.h"
#include "MorCraftingStationRecipeInfo.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCraftingStationRecipeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorItemRecipeRowHandle RecipeRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRecipeViewed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscovered;
    
    FMorCraftingStationRecipeInfo();
};

