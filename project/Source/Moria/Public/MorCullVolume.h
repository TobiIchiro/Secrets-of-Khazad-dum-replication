#pragma once
#include "CoreMinimal.h"
#include "CullVolume.h"
#include "MorCullVolume.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorCullVolume : public ACullVolume {
    GENERATED_BODY()
public:
    AMorCullVolume(const FObjectInitializer& ObjectInitializer);

};

