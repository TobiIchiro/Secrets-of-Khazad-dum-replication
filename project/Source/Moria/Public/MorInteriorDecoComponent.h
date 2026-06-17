#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorInteriorDecoComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorInteriorDecoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMorInteriorDecoComponent(const FObjectInitializer& ObjectInitializer);

};

