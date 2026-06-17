#pragma once
#include "CoreMinimal.h"
#include "MorAIController.h"
#include "WormAIController.generated.h"

UCLASS(Blueprintable)
class MORIA_API AWormAIController : public AMorAIController {
    GENERATED_BODY()
public:
    AWormAIController(const FObjectInitializer& ObjectInitializer);

};

