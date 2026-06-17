#include "FGKUIManager.h"
#include "Templates/SubclassOf.h"

UFGKUIManager::UFGKUIManager() {
    this->OwningPlayer = NULL;
    this->InputComponent = NULL;
    this->Config = NULL;
    this->bScreenIsPendingPushOnStack = false;
}

void UFGKUIManager::UnbindFromScreenShownEvent(TSubclassOf<UFGKUIScreen> ScreenClass, FFGKUIManagerScreenEvent Delegate) {
}

void UFGKUIManager::UnbindFromScreenHiddenEvent(TSubclassOf<UFGKUIScreen> ScreenClass, FFGKUIManagerScreenEvent Delegate) {
}

UFGKPopup* UFGKUIManager::ShowTwoButtonPopup(TSubclassOf<UFGKUIScreen> PopUpClass, const FText Title, const FText Message, const FText ConfirmText, const FText CancelText, FFGKPopupButtonUsed OnConfirmed, const FFGKPopupButtonUsed& OnCancelled) {
    return NULL;
}

void UFGKUIManager::ShowSpecificHuds(const TArray<TSoftClassPtr<UFGKHUD>>& SpecificHuds) {
}

UFGKUIScreen* UFGKUIManager::ShowScreenWithRowName(UDataTable* ScreenConfigsTable, FName RowName) {
    return NULL;
}

UFGKUIScreen* UFGKUIManager::ShowScreen(TSubclassOf<UFGKUIScreen> ScreenClass) {
    return NULL;
}

UFGKPopup* UFGKUIManager::ShowOneButtonPopup(TSubclassOf<UFGKPopup> PopUpClass, const FText Title, const FText Message, const FText ButtonText, const FFGKPopupButtonUsed& OnConfirmed) {
    return NULL;
}

void UFGKUIManager::SetWorldUIShown(bool bIsShown) {
}

void UFGKUIManager::SetUiInputMode() {
}

void UFGKUIManager::SetHudVisibility(EFGKHudVisibility Visibility) {
}

void UFGKUIManager::SetGameInputMode() {
}

void UFGKUIManager::RemoveWidgets() {
}

void UFGKUIManager::RemoveHuds() {
}

void UFGKUIManager::OnScreenTabChanged(UFGKUIScreen* ScreenInstance) {
}

void UFGKUIManager::OnScreenShown(UFGKUIScreen* ScreenInstance) {
}

void UFGKUIManager::OnScreenHidden(UFGKUIScreen* ScreenInstance) {
}

bool UFGKUIManager::IsWorldUIShown() const {
    return false;
}

bool UFGKUIManager::IsScreenShowing(TSubclassOf<UFGKUIScreen> ScreenClass) const {
    return false;
}

void UFGKUIManager::HideScreen(UFGKUIScreen* ScreenInstance) {
}

void UFGKUIManager::HideAllScreens() {
}

UFGKUIScreen* UFGKUIManager::GetScreen(TSubclassOf<UFGKUIScreen> ScreenClass) {
    return NULL;
}

UFGKHUD* UFGKUIManager::GetHUD(const TSubclassOf<UFGKHUD> HudClass, EFGKUIResult& OutResult) {
    return NULL;
}

bool UFGKUIManager::CanHideScreen(UFGKUIScreen* ScreenInstance) const {
    return false;
}

bool UFGKUIManager::CanHideAllScreens() const {
    return false;
}

void UFGKUIManager::BindToScreenShownEvent(TSubclassOf<UFGKUIScreen> ScreenClass, FFGKUIManagerScreenEvent Delegate) {
}

void UFGKUIManager::BindToScreenHiddenEvent(TSubclassOf<UFGKUIScreen> ScreenClass, FFGKUIManagerScreenEvent Delegate) {
}

bool UFGKUIManager::AreAnyScreensShowing() const {
    return false;
}


