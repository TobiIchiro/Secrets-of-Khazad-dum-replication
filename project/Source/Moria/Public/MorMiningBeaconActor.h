#pragma once
#include "CoreMinimal.h"
#include "MorInteractable.h"
#include "MorMiningBeaconActor.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorMiningBeaconActor : public AMorInteractable {
    GENERATED_BODY()
public:
    AMorMiningBeaconActor(const FObjectInitializer& ObjectInitializer);

};

