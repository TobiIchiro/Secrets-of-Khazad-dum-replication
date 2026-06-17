#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorAnyRecipeRowHandle.h"
#include "MorRecipeBundleDefinition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MORIA_API FMorRecipeBundleDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorAnyRecipeRowHandle> Recipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTradeValue;
    
    FMorRecipeBundleDefinition();
};

