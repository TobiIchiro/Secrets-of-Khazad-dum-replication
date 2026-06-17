#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MorBuildingLocationOverrideComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorBuildingLocationOverrideComp : public USceneComponent {
    GENERATED_BODY()
public:
    UMorBuildingLocationOverrideComp(const FObjectInitializer& ObjectInitializer);

};

