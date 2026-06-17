#pragma once
#include "CoreMinimal.h"
#include "MorWaterColliderGroupComponent.h"
#include "MorDwarfWaterFXComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorDwarfWaterFXComponent : public UMorWaterColliderGroupComponent {
    GENERATED_BODY()
public:
    UMorDwarfWaterFXComponent(const FObjectInitializer& ObjectInitializer);

};

