#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemProbability.generated.h"

class AFGKCollectible;

USTRUCT(BlueprintType)
struct FItemProbability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFGKCollectible> Item;
    
    FGK_API FItemProbability();
};

