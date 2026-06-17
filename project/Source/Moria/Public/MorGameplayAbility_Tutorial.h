#pragma once
#include "CoreMinimal.h"
#include "MontageGameplayAbility.h"
#include "MorGameplayAbility_Tutorial.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_Tutorial : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* AssignedMontage;
    
public:
    UMorGameplayAbility_Tutorial();

};

