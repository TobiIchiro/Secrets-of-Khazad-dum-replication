#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FGKAvailableTargetInfo.h"
#include "FGKComponentWithReplicatorInterface.h"
#include "FGKTargetDisplayInfo.h"
#include "FGKTargetRequest.h"
#include "FGKTargetingComponent.generated.h"

class AActor;
class AFGKBaseCharacter;
class AFGKWorldTargetingActor;
class UFGKTargetableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKTargetingComponent : public UActorComponent, public IFGKComponentWithReplicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKTargetableComponent* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKTargetableComponent*> ForcedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKTargetableComponent* LastMeleeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAcquisitionMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetRangeEquivalentTo90Degrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetRenderedWithinSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoftTargetInMoveDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSwitchAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetSwitchOnMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveTargetSwitchCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveTargetSwitchWhileAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSwitchScreenDistEquivalentTo90Degrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFGKWorldTargetingActor*> WorldTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKTargetableComponent* PotentialTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFGKAvailableTargetInfo> AvailableTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFGKTargetRequest> TargetRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetAcquisitionMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* KilledTarget;
    
public:
    UFGKTargetingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTarget(UFGKTargetableComponent* NewTarget);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TargetLockInternal(bool bValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetTargetPositionInternal(int32 TargetIdx, FVector Position);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeTargetInternal(UFGKTargetableComponent* NewTarget);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TargetLockInternal(bool bValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ChangeTargetInternal(UFGKTargetableComponent* NewTarget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedOnTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void GetTargetResultsForIndexedTarget(int32 TargetIdx, FFGKTargetDisplayInfo& OutResults);
    
    UFUNCTION(BlueprintCallable)
    UFGKTargetableComponent* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKTargetableComponent* GetPotentialTarget() const;
    
    UFUNCTION(BlueprintCallable)
    UFGKTargetableComponent* GetLastMeleeTarget() const;
    

    // Fix for true pure virtual functions not being implemented
};

