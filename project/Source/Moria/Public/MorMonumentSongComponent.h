#pragma once
#include "CoreMinimal.h"
#include "MorSongJoinComponent.h"
#include "MorMonumentSongComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorMonumentSongComponent : public UMorSongJoinComponent {
    GENERATED_BODY()
public:
    UMorMonumentSongComponent(const FObjectInitializer& ObjectInitializer);

};

