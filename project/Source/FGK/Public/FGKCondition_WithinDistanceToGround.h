#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_WithinDistanceToGround.generated.h"

class UFGKCharacterMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_WithinDistanceToGround : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKCharacterMovementComponent* MovementComponent;
    
public:
    UFGKCondition_WithinDistanceToGround();

};

