#pragma once
#include "CoreMinimal.h"
#include "FGKReplicatedSyncAttackData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FFGKReplicatedSyncAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MasterAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PuppetAnim;
    
    FGK_API FFGKReplicatedSyncAttackData();
};

