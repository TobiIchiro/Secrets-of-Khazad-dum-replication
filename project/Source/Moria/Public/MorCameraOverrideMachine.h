#pragma once
#include "CoreMinimal.h"
#include "FGKCameraOverrideMachine.h"
#include "Templates/SubclassOf.h"
#include "MorCameraOverrideMachine.generated.h"

class UFGKBaseCameraState;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCameraOverrideMachine : public UFGKCameraOverrideMachine {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKBaseCameraState> DefaultCameraState;
    
public:
    UMorCameraOverrideMachine();

};

