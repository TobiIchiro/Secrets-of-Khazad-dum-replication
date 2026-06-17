#pragma once
#include "CoreMinimal.h"
#include "MorItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "MorRecipeFragmentDefinition.generated.h"

class AMorItemBase;
class UGameplayEffect;

USTRUCT(BlueprintType)
struct MORIA_API FMorRecipeFragmentDefinition : public FMorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldReplaceOnCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorItemBase> ReplacementOnCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplacementOnCompletionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GrantedEffectOnCompletion;
    
    FMorRecipeFragmentDefinition();
};

