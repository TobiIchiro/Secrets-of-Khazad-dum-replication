#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FGKAIAdditionalSpawnParameters.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKAIAdditionalSpawnParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PreSpawnTags;
    
    FFGKAIAdditionalSpawnParameters();
};

