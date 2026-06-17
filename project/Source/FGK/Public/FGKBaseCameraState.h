#pragma once
#include "CoreMinimal.h"
#include "FGKState.h"
#include "FGKBaseCameraState.generated.h"

class AFGKPlayerCameraManager;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBaseCameraState : public UFGKState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKPlayerCameraManager* CameraManager;
    
public:
    UFGKBaseCameraState();

};

