#pragma once
#include "CoreMinimal.h"
#include "MorAISpawnManagementInterface.h"
#include "MorManager.h"
#include "MorAIQuickSpawnManager.generated.h"

class AActor;
class AMorAIPopulationManager;
class AMorAISpawnManager;
class AMorCharacter;
class UFGKBehaviorState;
class UMorAISpawnerComponent;

UCLASS(Blueprintable)
class MORIA_API AMorAIQuickSpawnManager : public AMorManager, public IMorAISpawnManagementInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorAISpawnerComponent* SpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftClassPtr<UFGKBehaviorState>> QuickSpawnBehaviorOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorAISpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorAIPopulationManager* PopulationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorCharacter*> CurrentSpawns;
    
public:
    AMorAIQuickSpawnManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnActorDestroyed(AActor* DestroyedActor);
    

    // Fix for true pure virtual functions not being implemented
};

