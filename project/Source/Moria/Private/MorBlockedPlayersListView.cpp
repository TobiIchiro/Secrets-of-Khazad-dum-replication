#include "MorBlockedPlayersListView.h"

UMorBlockedPlayersListView::UMorBlockedPlayersListView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Orientation = Orient_Vertical;
    this->SelectionMode = ESelectionMode::Single;
    this->ConsumeMouseWheel = EConsumeMouseWheel::WhenScrollingPossible;
    this->bClearSelectionOnClick = false;
    this->bIsFocusable = true;
    this->EntrySpacing = 0.00f;
    this->bReturnFocusToSelection = false;
    this->BlockedPlayersList = NULL;
}

void UMorBlockedPlayersListView::SetSelectionMode(TEnumAsByte<ESelectionMode::Type> InSelectionMode) {
}

void UMorBlockedPlayersListView::SetSelectedIndex(int32 Index) {
}

void UMorBlockedPlayersListView::SetBlockedPlayersList(UMorBlockedPlayersList* NewList) {
}

void UMorBlockedPlayersListView::ScrollIndexIntoView(int32 Index) {
}

void UMorBlockedPlayersListView::NavigateToIndex(int32 Index) {
}

bool UMorBlockedPlayersListView::IsRefreshPending() const {
    return false;
}

int32 UMorBlockedPlayersListView::GetNumItems() const {
    return 0;
}

FMorBlockedPlayersListItem UMorBlockedPlayersListView::GetItemAt(int32 Index) const {
    return FMorBlockedPlayersListItem{};
}

int32 UMorBlockedPlayersListView::GetIndexForItem(FMorBlockedPlayersListItem Item) const {
    return 0;
}

void UMorBlockedPlayersListView::BP_SetSelectedItem(FMorBlockedPlayersListItem Item) {
}

void UMorBlockedPlayersListView::BP_SetItemSelection(FMorBlockedPlayersListItem Item, bool bSelected) {
}

void UMorBlockedPlayersListView::BP_ScrollItemIntoView(FMorBlockedPlayersListItem Item) {
}

void UMorBlockedPlayersListView::BP_NavigateToItem(FMorBlockedPlayersListItem Item) {
}

bool UMorBlockedPlayersListView::BP_IsItemVisible(FMorBlockedPlayersListItem Item) const {
    return false;
}

bool UMorBlockedPlayersListView::BP_GetSelectedItems(TArray<FMorBlockedPlayersListItem>& Items) const {
    return false;
}

FMorBlockedPlayersListItem UMorBlockedPlayersListView::BP_GetSelectedItem() const {
    return FMorBlockedPlayersListItem{};
}

int32 UMorBlockedPlayersListView::BP_GetNumItemsSelected() const {
    return 0;
}

void UMorBlockedPlayersListView::BP_ClearSelection() {
}

void UMorBlockedPlayersListView::BP_CancelScrollIntoView() {
}


