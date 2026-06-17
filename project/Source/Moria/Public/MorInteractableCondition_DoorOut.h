#pragma once
#include "CoreMinimal.h"
#include "MorInteractableConditionBase.h"
#include "MorInteractableCondition_DoorOut.generated.h"

class AMorDoor;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableCondition_DoorOut : public UMorInteractableConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorDoor* Door;
    
public:
    UMorInteractableCondition_DoorOut();

};

