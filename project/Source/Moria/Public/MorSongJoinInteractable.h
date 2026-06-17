#pragma once
#include "CoreMinimal.h"
#include "BPMoriaInteractable.h"
#include "MorSongJoinInteractableInteractedSignatureDelegate.h"
#include "MorSongJoinInteractable.generated.h"

class ACharacter;

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorSongJoinInteractable : public ABPMoriaInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSongJoinInteractableInteractedSignature OnInteracted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
public:
    AMorSongJoinInteractable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

