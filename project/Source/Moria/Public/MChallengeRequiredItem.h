#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MChallengeRequiredItem.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct MORIA_API FMChallengeRequiredItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FMChallengeRequiredItem();
};

