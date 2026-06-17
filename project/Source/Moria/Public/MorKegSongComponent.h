#pragma once
#include "CoreMinimal.h"
#include "MorSongJoinComponent.h"
#include "MorKegSongComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorKegSongComponent : public UMorSongJoinComponent {
    GENERATED_BODY()
public:
    UMorKegSongComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientJoinSong();
    
};

