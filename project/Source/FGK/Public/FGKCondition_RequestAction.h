#pragma once
#include "CoreMinimal.h"
#include "EActionType.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_RequestAction.generated.h"

class UFGKCharacterHealthComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_RequestAction : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType ActionType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKCharacterHealthComponent* HealthComp;
    
public:
    UFGKCondition_RequestAction();

};

