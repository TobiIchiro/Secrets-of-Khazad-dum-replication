#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKComponentWithReplicatorInterface.h"
#include "GameplayTagContainer.h"
#include "MorHeavyCarryHolderComponentReplicatedTargetChangedSignatureDelegate.h"
#include "MorItemRowHandle.h"
#include "MorSaveGameObjectNative.h"
#include "MorHeavyCarryHolderComponent.generated.h"

class AActor;
class AMorHeavyCarryWrapperItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorHeavyCarryHolderComponent : public UActorComponent, public IMorSaveGameObjectNative, public IFGKComponentWithReplicatorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorHeavyCarryHolderComponentReplicatedTargetChangedSignature OnReplicatedTargetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorItemRowHandle WrapperItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnequipWhenOwnerHasTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveAttachedActorWithOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorHeavyCarryWrapperItem* CurrentWrapperItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedTarget, meta=(AllowPrivateAccess=true))
    AActor* ReplicatedTarget;
    
public:
    UMorHeavyCarryHolderComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnActorDetached(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorAttached(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

