#pragma once
#include "CoreMinimal.h"
#include "MorInteractable.h"
#include "MorInteraction.h"
#include "MorChargeSingingBaseInteractable.generated.h"

class ACharacter;
class UMorGameplayAbility_ChargeSing;

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorChargeSingingBaseInteractable : public AMorInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACharacter> OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorGameplayAbility_ChargeSing* OwnerAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction PrimaryInteraction;
    
public:
    AMorChargeSingingBaseInteractable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

