#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "MorContainerInstance.h"
#include "MorInteraction.h"
#include "MorReceptacle.h"
#include "Templates/SubclassOf.h"
#include "MorFilteredResourceReceptacle.generated.h"

class AInventoryItem;

UCLASS(Blueprintable)
class MORIA_API AMorFilteredResourceReceptacle : public AMorReceptacle, public IMorContainerInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction WithdrawInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InventoryFullText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction DepositInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction DepositAllInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReceptacleFullText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFirstObjectAsInteractableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitByStorageSlotsInsteadOfRawItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInventoryToBeAccessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWithdrawInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnFilterReplicated, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AInventoryItem>> AllowedItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Capacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPopulateItemFilterFromTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDepositAll;
    
public:
    AMorFilteredResourceReceptacle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemCountChanged(TSubclassOf<AInventoryItem> ItemClass, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryItemRemoved(TSubclassOf<AInventoryItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryChanged(const FItemHandle& ItemHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFilterSet(const TArray<TSoftClassPtr<AInventoryItem>>& ItemFilter);
    
    UFUNCTION(BlueprintCallable)
    void OnFilterReplicated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingCapacity(TSoftClassPtr<AInventoryItem> Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFilterName() const;
    

    // Fix for true pure virtual functions not being implemented
};

