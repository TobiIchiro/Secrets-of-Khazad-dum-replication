#pragma once
#include "CoreMinimal.h"
#include "Framework/Views/ITypedTableView.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateEnums.h"
#include "Components/ListViewBase.h"
#include "MorBlockedPlayersListItem.h"
#include "MorUIFocusWidgetInterface.h"
#include "MorBlockedPlayersListView.generated.h"

class UMorBlockedPlayersList;
class UUserWidget;

UCLASS(Blueprintable)
class MORIA_API UMorBlockedPlayersListView : public UListViewBase, public IMorUIFocusWidgetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleListItemEventDynamic, FMorBlockedPlayersListItem, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListItemSelectionChangedDynamic, FMorBlockedPlayersListItem, Item, bool, bIsSelected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListItemScrolledIntoViewDynamic, FMorBlockedPlayersListItem, Item, UUserWidget*, Widget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListEntryInitializedDynamic, FMorBlockedPlayersListItem, Item, UUserWidget*, Widget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemIsHoveredChangedDynamic, FMorBlockedPlayersListItem, Item, bool, bIsHovered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCreatedFirstItemWidget);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumeMouseWheel ConsumeMouseWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearSelectionOnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnFocusToSelection;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListEntryInitializedDynamic BP_OnEntryInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleListItemEventDynamic BP_OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleListItemEventDynamic BP_OnItemDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemIsHoveredChangedDynamic BP_OnItemIsHoveredChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListItemSelectionChangedDynamic BP_OnItemSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListItemScrolledIntoViewDynamic BP_OnItemScrolledIntoView;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreatedFirstItemWidget BP_OnCreatedFirstItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBlockedPlayersList* BlockedPlayersList;
    
public:
    UMorBlockedPlayersListView(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSelectionMode(TEnumAsByte<ESelectionMode::Type> InSelectionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockedPlayersList(UMorBlockedPlayersList* NewList);
    
    UFUNCTION(BlueprintCallable)
    void ScrollIndexIntoView(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRefreshPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorBlockedPlayersListItem GetItemAt(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexForItem(FMorBlockedPlayersListItem Item) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void BP_SetSelectedItem(FMorBlockedPlayersListItem Item);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetItemSelection(FMorBlockedPlayersListItem Item, bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void BP_ScrollItemIntoView(FMorBlockedPlayersListItem Item);
    
    UFUNCTION(BlueprintCallable)
    void BP_NavigateToItem(FMorBlockedPlayersListItem Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsItemVisible(FMorBlockedPlayersListItem Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool BP_GetSelectedItems(TArray<FMorBlockedPlayersListItem>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorBlockedPlayersListItem BP_GetSelectedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetNumItemsSelected() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void BP_CancelScrollIntoView();
    

    // Fix for true pure virtual functions not being implemented
};

