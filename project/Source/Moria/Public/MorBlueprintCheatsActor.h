#pragma once
#include "CoreMinimal.h"
#include "FGKBlueprintCheatsActor.h"
#include "MorBlueprintCheatsActor.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorBlueprintCheatsActor : public AFGKBlueprintCheatsActor {
    GENERATED_BODY()
public:
    AMorBlueprintCheatsActor(const FObjectInitializer& ObjectInitializer);

};

