#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKReactionsMachine.generated.h"

class UFGKState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKReactionsMachine : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* DefaultDeathState;
    
public:
    UFGKReactionsMachine();

};

