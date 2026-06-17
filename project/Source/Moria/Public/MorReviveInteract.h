#pragma once
#include "CoreMinimal.h"
#include "MorInteractable.h"
#include "MorInteraction.h"
#include "MorReviveInteract.generated.h"

class ACharacter;

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorReviveInteract : public AMorInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction PrimaryInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACharacter> OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReviveSelfText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReviveOtherText;
    
public:
    AMorReviveInteract(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

