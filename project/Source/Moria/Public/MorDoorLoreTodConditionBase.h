#pragma once
#include "CoreMinimal.h"
#include "MorInteractableConditionBase.h"
#include "MorDoorLoreTodConditionBase.generated.h"

class UMorDoorLoreTodLightComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorDoorLoreTodConditionBase : public UMorInteractableConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorDoorLoreTodLightComponent* InteractableTodLight;
    
public:
    UMorDoorLoreTodConditionBase();

};

