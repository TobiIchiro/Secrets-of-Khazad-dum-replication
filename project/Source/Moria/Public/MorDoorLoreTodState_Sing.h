#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Sing.h"
#include "MorDoorLoreTodState_Sing.generated.h"

class UMorDoorLoreTodLightComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorDoorLoreTodState_Sing : public UMorInteractableState_Sing {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorDoorLoreTodLightComponent* InteractableTodLight;
    
public:
    UMorDoorLoreTodState_Sing();

};

