#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FGKCharacterState.h"
#include "FGKAerialMachine.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAerialMachine : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepVelocityOnMoveForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer KeepVelocityOnAnyTag;
    
public:
    UFGKAerialMachine();

};

