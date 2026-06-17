#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAddItem.h"
#include "ItemHandle.h"
#include "MorCursorSlotEventSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "MorCursorSlotComponent.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorCursorSlotComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorCursorSlotEventSignature OnCursorSlotAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorCursorSlotEventSignature OnCursorSlotRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> CursorContainerItemClass;
    
public:
    UMorCursorSlotComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryMovingCursorItemBackIntoInventory();
    
    UFUNCTION(BlueprintCallable)
    void SwapAllOrMoveAllToCursorSlot(const FItemHandle& From);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTryMovingCursorItemBackIntoInventory();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleCursorMove(const FItemHandle& From, int32 Count, EAddItem AddType, bool bPerformSwapIfPossible);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveToCursorSlot(const FItemHandle& From, int32 Count, EAddItem AddType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ItemTypeRemoved(TSubclassOf<AInventoryItem> Class);
    
    UFUNCTION(BlueprintCallable)
    void ItemTypeAdded(TSubclassOf<AInventoryItem> Class);
    
    UFUNCTION(BlueprintCallable)
    void InventoryChanged(const FItemHandle& ItemHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetCursorSlotContents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetCursorSlotContainer() const;
    
};

