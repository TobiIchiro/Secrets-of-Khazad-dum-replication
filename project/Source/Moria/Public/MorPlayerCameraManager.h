#pragma once
#include "CoreMinimal.h"
#include "FGKPlayerCameraManager.h"
#include "MorPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class MORIA_API AMorPlayerCameraManager : public AFGKPlayerCameraManager {
    GENERATED_BODY()
public:
    AMorPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

