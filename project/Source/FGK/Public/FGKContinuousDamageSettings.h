#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FGKRadialDamageParams.h"
#include "FGKContinuousDamageSettings.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class FGK_API UFGKContinuousDamageSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKRadialDamageParams DamageParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PulseEffect;
    
    UFGKContinuousDamageSettings();

};

