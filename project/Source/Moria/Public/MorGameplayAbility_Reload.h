#pragma once
#include "CoreMinimal.h"
#include "MontageGameplayAbility.h"
#include "MorGameplayAbility_Reload.generated.h"

class UAnimInstance;
class UAnimMontage;

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_Reload : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponAnim_Reload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimInstance> WeaponABP;
    
public:
    UMorGameplayAbility_Reload();

};

