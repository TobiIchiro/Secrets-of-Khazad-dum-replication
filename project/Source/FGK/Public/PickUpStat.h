#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PickUpStat.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPickUpStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FGK_API FPickUpStat();
};

