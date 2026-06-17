#pragma once
#include "CoreMinimal.h"
#include "EMorRecipeUnlockType.h"
#include "MorAnyItemRowHandle.h"
#include "MorConstructionRowHandle.h"
#include "MorRecipeFragmentRowHandle.h"
#include "MorRecipeUnlock.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorRecipeUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorRecipeUnlockType UnlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFragments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorRecipeFragmentRowHandle> UnlockRequiredFragments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorAnyItemRowHandle> UnlockRequiredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorConstructionRowHandle> UnlockRequiredConstructions;
    
    FMorRecipeUnlock();
};

