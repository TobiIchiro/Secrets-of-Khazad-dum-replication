#pragma once
#include "CoreMinimal.h"
#include "MorSongJoinComponent.h"
#include "MorVenerationSongComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorVenerationSongComponent : public UMorSongJoinComponent {
    GENERATED_BODY()
public:
    UMorVenerationSongComponent(const FObjectInitializer& ObjectInitializer);

};

