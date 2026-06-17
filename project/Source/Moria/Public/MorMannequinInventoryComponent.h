#pragma once
#include "CoreMinimal.h"
#include "MorInventoryComponent.h"
#include "MorMannequinInventoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorMannequinInventoryComponent : public UMorInventoryComponent {
    GENERATED_BODY()
public:
    UMorMannequinInventoryComponent(const FObjectInitializer& ObjectInitializer);

};

