#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenState.h"
#include "MorReplicatedManager.h"
#include "MorEarthquakeManager.generated.h"

class AActor;
class AWorldLayout;

UCLASS(Blueprintable)
class MORIA_API AMorEarthquakeManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> LocalEffectsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpawnedEffectsActor;
    
public:
    AMorEarthquakeManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WorldLayoutStarting(AWorldLayout* WorldLayout);
    
    UFUNCTION(BlueprintCallable)
    void LoadingScreenStateChanged(ELoadingScreenState LoadingScreenState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEarthquake() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EarthquakeStarted();
    
};

