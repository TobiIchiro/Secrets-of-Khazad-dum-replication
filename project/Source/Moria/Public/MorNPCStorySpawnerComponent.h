#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "EBubbleState.h"
#include "MorAINpcSpawnerSimpleEventDelegate.h"
#include "MorAINpcSpawnerSpawnEventDelegate.h"
#include "MorEntitlementRowHandle.h"
#include "MorNPCRoleRowHandle.h"
#include "MorSaveGameObjectNative.h"
#include "MorUniqueNpcRowHandle.h"
#include "MorNPCStorySpawnerComponent.generated.h"

class AMorCharacter;
class AMorNPCManager;
class UMorAISpawnerComponent;
class UWorldLayoutBubble;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorNPCStorySpawnerComponent : public USceneComponent, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEntitlementRowHandle RequiredOptionalEntitlement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid NpcGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCRoleRowHandle NpcRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorUniqueNpcRowHandle StoryCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInventoryPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InventoryPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod SpawnMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAINpcSpawnerSimpleEvent OnSpawningEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAINpcSpawnerSimpleEvent OnNpcRescued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorCharacter> SpawnCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAINpcSpawnerSpawnEvent OnCharacterSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMorNPCManager> NpcManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorAISpawnerComponent* SiblingSpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* CurrentSpawnedCharacter;
    
public:
    UMorNPCStorySpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestSpawnCharacter();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldGenDone();
    
    UFUNCTION(BlueprintCallable)
    void OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState);
    

    // Fix for true pure virtual functions not being implemented
};

