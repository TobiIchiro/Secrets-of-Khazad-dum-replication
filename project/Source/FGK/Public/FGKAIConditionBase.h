#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "FGKAIConditionBase.generated.h"

class AFGKAIController;
class AFGKAISquad;
class AFGKBaseCharacter;
class UFGKAITargetingComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKAIConditionBase : public UFGKCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKAITargetingComponent* TargetingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKAISquad* SquadOuter;
    
public:
    UFGKAIConditionBase();

};

