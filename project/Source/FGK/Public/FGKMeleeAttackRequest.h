#pragma once
#include "CoreMinimal.h"
#include "EFGKTargetResult.h"
#include "FGKMeleeAttackRow.h"
#include "FGKMeleeAttackRequest.generated.h"

class UFGKTargetableComponent;

USTRUCT(BlueprintType)
struct FGK_API FFGKMeleeAttackRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKTargetableComponent* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKMeleeAttackRow Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFGKTargetResult TargetResult;
    
    FFGKMeleeAttackRequest();
};

