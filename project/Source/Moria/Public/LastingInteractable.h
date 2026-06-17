#pragma once
#include "CoreMinimal.h"
#include "MorInteractable.h"
#include "LastingInteractable.generated.h"

UCLASS(Blueprintable)
class MORIA_API ALastingInteractable : public AMorInteractable {
    GENERATED_BODY()
public:
    ALastingInteractable(const FObjectInitializer& ObjectInitializer);

};

