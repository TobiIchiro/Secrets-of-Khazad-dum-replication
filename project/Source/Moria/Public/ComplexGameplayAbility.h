#pragma once
#include "CoreMinimal.h"
#include "MoriaGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "ComplexGameplayAbility.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class MORIA_API UComplexGameplayAbility : public UMoriaGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ChargeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForRelease;
    
public:
    UComplexGameplayAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void WaitFinished(float HoldTime);
    
};

