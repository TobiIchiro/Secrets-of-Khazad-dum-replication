#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMorSurfaceContextRequirementRule.h"
#include "MorSurfaceContextRequirement.generated.h"

USTRUCT(BlueprintType)
struct FMorSurfaceContextRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorSurfaceContextRequirementRule Rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ContextType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    MORIA_API FMorSurfaceContextRequirement();
};

