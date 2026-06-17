#pragma once
#include "CoreMinimal.h"
#include "EInventoryQuery.h"
#include "ItemHandle.h"
#include "SoftItemCount.h"
#include "MorChallengeInstance.h"
#include "MorInteraction.h"
#include "MorReceptacle.h"
#include "ChallengeReceptacle.generated.h"

UCLASS(Blueprintable)
class MORIA_API AChallengeReceptacle : public AMorReceptacle, public IMorChallengeInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction DepositInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=ChallengeElementIdReplicated, meta=(AllowPrivateAccess=true))
    int32 ChallengeElementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftItemCount> RequiredItemCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryQuery PayFrom;
    
public:
    AChallengeReceptacle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemsAdded(int32 AddedMatching);
    
    UFUNCTION(BlueprintCallable)
    void InventoryChanged(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Incomplete(int32 Have, int32 Need);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchingCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Complete(int32 Have);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChallengeElementIdReplicated();
    

    // Fix for true pure virtual functions not being implemented
};

