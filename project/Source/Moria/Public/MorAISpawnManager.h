#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FGKManager.h"
#include "ActiveSpawners.h"
#include "EMorAISpawnContext.h"
#include "MorAIDespawn.h"
#include "MorAIQueuedSpawn.h"
#include "MorAISpawnManager.generated.h"

class AActor;
class AMorCharacter;
class UObject;

UCLASS(Blueprintable)
class MORIA_API AMorAISpawnManager : public AFGKManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpawnLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorAISpawnContext, FActiveSpawners> CurrentActiveSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorAIQueuedSpawn> QueuedSpawns;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FMorAIDespawn> QueuedDespawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorAIDespawn> QueuedRespawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValidationCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAttemptCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnAttemptsToTry;
    
public:
    AMorAISpawnManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDespawnFinished(AActor* DestroyedActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestSpawn(TSoftClassPtr<AMorCharacter> InCharacterType, FTransform InSpawnTransform, UObject* InSpawner, EMorAISpawnContext InSpawnContext);
    
};

