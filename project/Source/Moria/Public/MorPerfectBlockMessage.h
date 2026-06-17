#pragma once
#include "CoreMinimal.h"
#include "MorPerfectBlockMessage.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MORIA_API FMorPerfectBlockMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttackingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BlockingActor;
    
    FMorPerfectBlockMessage();
};

