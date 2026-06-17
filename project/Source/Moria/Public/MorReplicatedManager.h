#pragma once
#include "CoreMinimal.h"
#include "FGKManager.h"
#include "MorReplicatedManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorReplicatedManager : public AFGKManager {
    GENERATED_BODY()
public:
    AMorReplicatedManager(const FObjectInitializer& ObjectInitializer);

};

