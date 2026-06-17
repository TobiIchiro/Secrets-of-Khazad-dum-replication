#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "FGKDeformedMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKDeformedMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UFGKDeformedMeshComponent(const FObjectInitializer& ObjectInitializer);

};

