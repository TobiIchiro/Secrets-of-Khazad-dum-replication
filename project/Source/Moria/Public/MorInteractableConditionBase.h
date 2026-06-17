#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorInteractableConditionBase.generated.h"

class AMorInteractable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableConditionBase : public UFGKCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorInteractable* Interactable;
    
public:
    UMorInteractableConditionBase();

};

