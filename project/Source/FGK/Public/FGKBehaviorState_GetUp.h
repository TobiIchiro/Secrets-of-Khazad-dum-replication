#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "FGKBehaviorState_GetUp.generated.h"

class UFGKCharacterHealthComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_GetUp : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKCharacterHealthComponent* HealthComponent;
    
public:
    UFGKBehaviorState_GetUp();

};

