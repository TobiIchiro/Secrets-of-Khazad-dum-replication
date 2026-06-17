#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Interact.h"
#include "Templates/SubclassOf.h"
#include "MorInteractableState_Ability.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableState_Ability : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishAfterFirstActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> AbilityClass;
    
public:
    UMorInteractableState_Ability();

};

