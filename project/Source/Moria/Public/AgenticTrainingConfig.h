#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EpisodeState.h"
#include "AgenticTrainingConfig.generated.h"

UCLASS(Blueprintable)
class MORIA_API AAgenticTrainingConfig : public AActor {
    GENERATED_BODY()
public:
    AAgenticTrainingConfig(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartTest();
    
    UFUNCTION(BlueprintCallable)
    void RestartTest(EpisodeState State);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartTest(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestartTest(AActor* Actor, EpisodeState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEpisodeStateStateChange(AActor* Actor, EpisodeState PreviousState, EpisodeState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EpisodeState GetEpisodeState();
    
    UFUNCTION(BlueprintCallable)
    void EndTest(bool Success);
    
};

