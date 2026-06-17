#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActorStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    FGK_API FActorStruct();
};

