#pragma once
#include "CoreMinimal.h"
#include "FoliageInstancedStaticMeshComponent.h"
#include "MorFoliageInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorFoliageInstancedStaticMeshComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UMorFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

