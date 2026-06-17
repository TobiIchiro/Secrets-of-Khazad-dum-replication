#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPuppetState.h"
#include "FGKReplicatedSyncAttackData.h"
#include "FGKSyncedAnimComponent.generated.h"

class AFGKBaseCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKSyncedAnimComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPuppetState CurrentPuppetState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* SyncPuppet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKReplicatedSyncAttackData SyncAttackData;
    
public:
    UFGKSyncedAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestSync(const FFGKReplicatedSyncAttackData& InData, AFGKBaseCharacter* InMaster, AFGKBaseCharacter* InPuppet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SyncSuccess(const FFGKReplicatedSyncAttackData& InData, AFGKBaseCharacter* InMaster, AFGKBaseCharacter* InPuppet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SyncFailed(AFGKBaseCharacter* InMaster, AFGKBaseCharacter* Puppet);
    
};

