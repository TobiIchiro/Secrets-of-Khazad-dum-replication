#pragma once
#include "CoreMinimal.h"
#include "MorChargeSingingBaseInteractable.h"
#include "Templates/SubclassOf.h"
#include "MorCombatSongInteractable.generated.h"

class UGameplayAbility;

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorCombatSongInteractable : public AMorChargeSingingBaseInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> FollowerAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractableText;
    
public:
    AMorCombatSongInteractable(const FObjectInitializer& ObjectInitializer);

};

