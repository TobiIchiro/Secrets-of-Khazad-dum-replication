#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TransformLocatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UTransformLocatorComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UTransformLocatorComponent(const FObjectInitializer& ObjectInitializer);

};

