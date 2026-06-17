#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EMorAINavigationQueryStatus.h"
#include "MorAILairPopulationRowHandle.h"
#include "MorAISpawnManagementInterface.h"
#include "MorChallengeInstance.h"
#include "Templates/SubclassOf.h"
#include "WormLair.generated.h"

class AMorCharacter;
class AWorm;
class AWormEgg;
class AWormSquad;
class UMorAISpawnerComponent;
class UWormSquadState;

UCLASS(Blueprintable)
class AWormLair : public AActor, public IMorChallengeInstance, public IMorAISpawnManagementInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAlwaysUseOverridePopulationRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAILairPopulationRowHandle OverrideLairPopulationRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWormSquad> WormSquadClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWormSquadState> WormSquadBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWorm> WormClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWormEgg> WormEggClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorAISpawnerComponent* SpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpawnWaitingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveSpawnWaitingTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 WavesCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 WormsNumToWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWormSquad* SpawnedSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorCharacter*> SpawnedCharacters;
    
public:
    AWormLair(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedDeadOrDestroyed(AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnNavigationQueryFinished(const FIntVector& CellPosition, EMorAINavigationQueryStatus QueryStatus, FVector FoundLocation);
    

    // Fix for true pure virtual functions not being implemented
};

