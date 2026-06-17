#pragma once
#include "CoreMinimal.h"
#include "MorInteractableConditionBase.h"
#include "MorInteractableCondition_DoorIn.generated.h"

class AMorDoor;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableCondition_DoorIn : public UMorInteractableConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorDoor* Door;
    
public:
    UMorInteractableCondition_DoorIn();

};

