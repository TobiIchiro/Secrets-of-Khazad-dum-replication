#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "FGKFlatCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKFlatCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UFGKFlatCapsuleComponent(const FObjectInitializer& ObjectInitializer);

};

