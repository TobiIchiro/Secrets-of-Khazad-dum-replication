#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "FGKObservableSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKObservableSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UFGKObservableSplineComponent(const FObjectInitializer& ObjectInitializer);

};

