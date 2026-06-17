#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FGKAnimNotifyState_CreateDamageField.generated.h"

class UFGKContinuousDamageComponent;
class UFGKContinuousDamageSettings;
class UNiagaraSystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyState_CreateDamageField : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKContinuousDamageSettings* ContinuousDamageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PulseEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PulseEffectLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKContinuousDamageComponent* ContinuousDamageComponent;
    
public:
    UFGKAnimNotifyState_CreateDamageField();

};

