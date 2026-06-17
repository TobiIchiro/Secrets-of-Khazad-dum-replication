#pragma once
#include "CoreMinimal.h"
#include "TargetedMontageGameplayAbility.h"
#include "MorGameplayAbility_SimpleMontage.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_SimpleMontage : public UTargetedMontageGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* AssignedMontage;
    
public:
    UMorGameplayAbility_SimpleMontage();

};

