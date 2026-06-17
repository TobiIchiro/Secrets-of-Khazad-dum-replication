#pragma once
#include "CoreMinimal.h"
#include "MoriaAnimNotifyState.h"
#include "MoriaAnimNotifyState_ChargeWeapon.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MORIA_API UMoriaAnimNotifyState_ChargeWeapon : public UMoriaAnimNotifyState {
    GENERATED_BODY()
public:
    UMoriaAnimNotifyState_ChargeWeapon();

private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) const;
    
};

