#pragma once
#include "CoreMinimal.h"
#include "ItemCount.h"
#include "MorContainerInstance.h"
#include "MorInteractable.h"
#include "MorInteraction.h"
#include "MorPickup.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorPickup : public AMorInteractable, public IMorContainerInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FItemCount> ItemCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction PickUpInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OneItemTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TwoItemsTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ThreeItemsTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MoreThanThreeItemsTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRespawnInProgressChanged, meta=(AllowPrivateAccess=true))
    bool RespawnInProgress;
    
public:
    AMorPickup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRespawnInProgressChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCount(int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddItem(const FItemCount& ItemCount, bool bCheckIfValid);
    

    // Fix for true pure virtual functions not being implemented
};

