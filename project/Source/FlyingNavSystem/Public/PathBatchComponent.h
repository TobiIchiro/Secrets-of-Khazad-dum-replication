#pragma once
#include "CoreMinimal.h"
#include "Components/LineBatchComponent.h"
#include "PathBatchComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPathBatchComponent : public ULineBatchComponent {
    GENERATED_BODY()
public:
    UPathBatchComponent(const FObjectInitializer& ObjectInitializer);

};

