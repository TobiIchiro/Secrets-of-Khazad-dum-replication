#pragma once
#include "CoreMinimal.h"
#include "MontageGameplayAbility.h"
#include "UseItemGameplayAbility.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class MORIA_API UUseItemGameplayAbility : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EmptyContainerAnim;
    
public:
    UUseItemGameplayAbility();

};

