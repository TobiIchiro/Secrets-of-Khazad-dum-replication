#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGKCameraOverrideSpline.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKCameraOverrideSpline : public AActor {
    GENERATED_BODY()
public:
    AFGKCameraOverrideSpline(const FObjectInitializer& ObjectInitializer);

};

