#pragma once
#include "CoreMinimal.h"
#include "FGKState.h"
#include "FGKCameraOverrideMachine.generated.h"

class AFGKCameraOverrideSpline;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCameraOverrideMachine : public UFGKState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCameraOverrideSpline* Spline;
    
public:
    UFGKCameraOverrideMachine();

};

