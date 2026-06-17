#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBubbleState.h"
#include "MorSaveDataRuntimeActorRecordHandle.h"
#include "MorSaveSystemWorldStateStatusDelegate.h"
#include "MorSaveSystemWorldState.generated.h"

class UMorBuildingComponent;
class UMorSaveSystemLevelRecordRuntimeCollection;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AMorSaveSystemWorldState : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSaveSystemWorldStateStatus OnWorldStateIsReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSaveSystemWorldStateStatus PostWorldStateIsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSaveEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveLevelBlueprints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoPlayerCharacterTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorBuildingComponent* Building;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorSaveSystemLevelRecordRuntimeCollection* RegisteredLevelRecords;
    
public:
    AMorSaveSystemWorldState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UnregisterRuntimeActorFromHandle(const FMorSaveDataRuntimeActorRecordHandle& ActorHandle, bool bWasDestroyed, bool bUnregisterFromLevelRecord);
    
    UFUNCTION(BlueprintCallable)
    bool StoreRuntimeActorFromHandle(UPARAM(Ref) FMorSaveDataRuntimeActorRecordHandle& RuntimeActorHandle, bool bStoreStability);
    
    UFUNCTION(BlueprintCallable)
    bool StoreRuntimeActor(AActor* Actor, UPARAM(Ref) FMorSaveDataRuntimeActorRecordHandle& InOutRuntimeActorHandle, bool bStoreStability);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWorldIsReady();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnBubbleStateChanged(const UWorldLayoutBubble* Bubble, EBubbleState State);
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetRuntimeActorFromHandle(const FMorSaveDataRuntimeActorRecordHandle& ActorHandle, bool& bActorIsValid);
    
};

