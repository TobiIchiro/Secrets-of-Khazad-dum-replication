#pragma once
#include "CoreMinimal.h"
#include "MorReplicatedManager.h"
#include "MorFXManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorFXManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    AMorFXManager(const FObjectInitializer& ObjectInitializer);

};

