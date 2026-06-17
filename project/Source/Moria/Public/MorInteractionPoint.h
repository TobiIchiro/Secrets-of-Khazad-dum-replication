#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MorInteractionPoint.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorInteractionPoint : public USceneComponent {
    GENERATED_BODY()
public:
    UMorInteractionPoint(const FObjectInitializer& ObjectInitializer);

};

