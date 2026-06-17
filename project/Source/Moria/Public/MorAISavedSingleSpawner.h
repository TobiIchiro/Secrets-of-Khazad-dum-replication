#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBubbleState.h"
#include "EMorAISingleSpawnerType.h"
#include "MorAISingleSpawnerEventDelegate.h"
#include "MorAISpawnManagementInterface.h"
#include "MorProxyActorInterface.h"
#include "MorSaveGameObjectNative.h"
#include "MorZoneRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorAISavedSingleSpawner.generated.h"

class AFGKAIController;
class AMorCharacter;
class UCapsuleComponent;
class UMorAISpawnerComponent;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AMorAISavedSingleSpawner : public AActor, public IMorProxyActorInterface, public IMorSaveGameObjectNative, public IMorAISpawnManagementInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAISingleSpawnerType SpawnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorCharacter> ExplicitCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFGKAIController> ExplicitControllerOverrideClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorZoneRowHandle, TSoftClassPtr<AMorCharacter>> ZoneToCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorCharacter> FallbackCharacterClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAISingleSpawnerEvent OnCharacterSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAISingleSpawnerEvent OnSpawnedKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* SpawnedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSpawnedCharacterKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontAutoSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreKilledSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorAISpawnerComponent* SpawnerComponent;
    
public:
    AMorAISavedSingleSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnAiCharacter();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SaveCharacterDeath();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldGenDone();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedCharacterKilled(AActor* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorCharacter* GetSpawnedCharacter() const;
    

    // Fix for true pure virtual functions not being implemented
};

