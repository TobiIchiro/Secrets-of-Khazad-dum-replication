#pragma once
#include "CoreMinimal.h"
#include "TargetedMontageGameplayAbility.h"
#include "TeeterGameplayAbility.generated.h"

UCLASS(Blueprintable)
class MORIA_API UTeeterGameplayAbility : public UTargetedMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EarlyExitMinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeeterHoldCancelTime;
    
public:
    UTeeterGameplayAbility();

};

