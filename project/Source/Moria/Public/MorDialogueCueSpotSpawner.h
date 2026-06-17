#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/TriggerBox.h"
#include "EMorDialogueEventStatus.h"
#include "MorProxyActorInterface.h"
#include "MorSaveDataRuntimeActorRecordHandle.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "Templates/SubclassOf.h"
#include "MorDialogueCueSpotSpawner.generated.h"

class AActor;
class ACharacter;
class AMorCharacter;
class AMorCueSpotInteractable;
class UMorViewTrigger;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AMorDialogueCueSpotSpawner : public ATriggerBox, public IMorProxyActorInterface, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorViewTrigger* ViewTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorCueSpotInteractable> CueSpotToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CueSpotTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReplayDialogueEventText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsCueSpotSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorSaveDataRuntimeActorRecordHandle CueSpotRuntimeActorHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorCueSpotInteractable* SpawnedCueSpot;
    
public:
    AMorDialogueCueSpotSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnCueSpot(EMorDialogueEventStatus DialogueEventStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestDialogueEvent(AMorCharacter* Dwarf);
    
    UFUNCTION(BlueprintCallable)
    void OnViewed(AMorCharacter* Character);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInteract(ACharacter* Interactor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    

    // Fix for true pure virtual functions not being implemented
};

