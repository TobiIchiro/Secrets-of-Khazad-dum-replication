#pragma once
#include "CoreMinimal.h"
#include "ReplicatedMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FReplicatedMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    FGK_API FReplicatedMontage();
};

