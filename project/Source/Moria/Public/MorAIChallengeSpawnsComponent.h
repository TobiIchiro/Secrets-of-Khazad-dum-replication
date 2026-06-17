#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EBubbleState.h"
#include "MorAIChallengeSpawnerEventDelegate.h"
#include "MorAIChallengeSpawnsRowHandle.h"
#include "MorAISpawnManagementInterface.h"
#include "MorSaveGameObjectNative.h"
#include "MorAIChallengeSpawnsComponent.generated.h"

class AActor;
class AMorCharacter;
class UMorAISpawnerComponent;
class UWorldLayoutBubble;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorAIChallengeSpawnsComponent : public USceneComponent, public IMorAISpawnManagementInterface, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIChallengeSpawnsRowHandle ChallengeSpawnsRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExplicitSpawns;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AMorCharacter>, uint32> CharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSpawnsBeAwareOfEachother;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIChallengeSpawnerEvent OnCharacterSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIChallengeSpawnerEvent OnSpawnedKilled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorAISpawnerComponent* SiblingSpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorCharacter*> CurrentSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bChallengeCleared;
    
public:
    UMorAIChallengeSpawnsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestSpawnCharacters();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldGenDone();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedCharacterKilled(AActor* KilledCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState);
    

    // Fix for true pure virtual functions not being implemented
};

