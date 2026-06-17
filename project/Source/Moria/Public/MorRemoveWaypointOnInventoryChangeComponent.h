#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "MorWaypointContextComponent.h"
#include "Templates/SubclassOf.h"
#include "MorRemoveWaypointOnInventoryChangeComponent.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorRemoveWaypointOnInventoryChangeComponent : public UMorWaypointContextComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveOnAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveOnRemove;
    
public:
    UMorRemoveWaypointOnInventoryChangeComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ItemRemoved(TSubclassOf<AInventoryItem> Class, int32 AmountRemoved, int32 NewTotalCount);
    
    UFUNCTION(BlueprintCallable)
    void ItemAdded(const FItemHandle& Item, TSubclassOf<AInventoryItem> Class, int32 AmountAdded, int32 TotalCount, bool bParentContainerWasRecentlyAdded);
    
};

