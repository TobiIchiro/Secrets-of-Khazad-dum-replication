#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Ability.h"
#include "Templates/SubclassOf.h"
#include "MorInteractableState_VenerationIdle.generated.h"

class ACharacter;
class UGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableState_VenerationIdle : public UMorInteractableState_Ability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* CharInteractor;
    
public:
    UMorInteractableState_VenerationIdle();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UGameplayAbility> GetGameplayAbility();
    
};

