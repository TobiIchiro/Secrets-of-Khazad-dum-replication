#pragma once
#include "CoreMinimal.h"
#include "FGKTargetPerAttacker.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFGKTargetPerAttacker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Attacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSocketName;
    
    FGK_API FFGKTargetPerAttacker();
};

