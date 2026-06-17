#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_CanUncrouch.generated.h"

class UFGKCharacterMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_CanUncrouch : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKCharacterMovementComponent* MovementComponent;
    
public:
    UFGKCondition_CanUncrouch();

};

