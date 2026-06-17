#pragma once
#include "CoreMinimal.h"
#include "MorSongJoinComponent.h"
#include "MorSettlementSongComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorSettlementSongComponent : public UMorSongJoinComponent {
    GENERATED_BODY()
public:
    UMorSettlementSongComponent(const FObjectInitializer& ObjectInitializer);

};

