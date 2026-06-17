#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterHealthComponent.h"
#include "MorCharacterHealthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorCharacterHealthComponent : public UFGKCharacterHealthComponent {
    GENERATED_BODY()
public:
    UMorCharacterHealthComponent(const FObjectInitializer& ObjectInitializer);

};

