#pragma once
#include "CoreMinimal.h"
#include "MorAIController.h"
#include "MorAIFlyerController.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorAIFlyerController : public AMorAIController {
    GENERATED_BODY()
public:
    AMorAIFlyerController(const FObjectInitializer& ObjectInitializer);

};

