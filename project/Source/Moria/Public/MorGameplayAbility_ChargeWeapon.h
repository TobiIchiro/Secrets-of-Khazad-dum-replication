#pragma once
#include "CoreMinimal.h"
#include "MontageHoldGameplayAbility.h"
#include "MorGameplayAbility_ChargeWeapon.generated.h"

class AMorInventoryItem;
class UCurveFloat;

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_ChargeWeapon : public UMontageHoldGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ForceFeedbackCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceFeedbackIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorInventoryItem* Weapon;
    
public:
    UMorGameplayAbility_ChargeWeapon();

};

