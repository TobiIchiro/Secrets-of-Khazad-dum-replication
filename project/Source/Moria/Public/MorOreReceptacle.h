#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InventoryQueryInterface.h"
#include "ItemHandle.h"
#include "MContainerItem.h"
#include "MorAccessibleStorageInterface.h"
#include "MorContainerInstance.h"
#include "MorDeferredActorInitializer.h"
#include "MorProxyActorInterface.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "Templates/SubclassOf.h"
#include "MorOreReceptacle.generated.h"

class AMorOreBreakableContainer;
class UEquipComponent;
class UInventoryComponent;
class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AMorOreReceptacle : public AActor, public IInventoryQueryInterface, public IMorAccessibleStorageInterface, public IMorContainerInstance, public IMorProxyActorInterface, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative, public IMorDeferredActorInitializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorOreBreakableContainer> OreContainerToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorOreBreakableContainer* BreakableOreContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMContainerItem ResourceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SleepCountToRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentNightCount;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 LastNightCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bContainerSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
public:
    AMorOreReceptacle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSleepAdvance(float JumpedGameTimeinSeconds, float JumpedRealTimeinSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOreContainerBroken(bool bPreRuined);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    UInventoryComponent* GetInventory() const override PURE_VIRTUAL(GetInventory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UEquipComponent* GetEquip() const override PURE_VIRTUAL(GetEquip, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAccessibleStorage() const override PURE_VIRTUAL(HasAccessibleStorage, return false;);
    
    UFUNCTION(BlueprintCallable)
    FItemHandle GetAccessibleStorageRoot() const override PURE_VIRTUAL(GetAccessibleStorageRoot, return FItemHandle{};);
    
};

