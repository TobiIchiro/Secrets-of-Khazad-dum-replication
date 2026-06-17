#pragma once
#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "FGKInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKInputComponent : public UEnhancedInputComponent {
    GENERATED_BODY()
public:
    UFGKInputComponent(const FObjectInitializer& ObjectInitializer);

};

