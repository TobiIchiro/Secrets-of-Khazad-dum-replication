#pragma once
#include "CoreMinimal.h"
#include "MorSongJoinComponent.h"
#include "MorDoorLoreTODSongJoinComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorDoorLoreTODSongJoinComponent : public UMorSongJoinComponent {
    GENERATED_BODY()
public:
    UMorDoorLoreTODSongJoinComponent(const FObjectInitializer& ObjectInitializer);

};

