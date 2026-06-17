#include "MorUIFocusFunctionLibrary.h"

UMorUIFocusFunctionLibrary::UMorUIFocusFunctionLibrary() {
}

bool UMorUIFocusFunctionLibrary::WasFocusModeChangedThisFrameTo(const UObject* WorldContext, EMorFocusMode FocusMode) {
    return false;
}

void UMorUIFocusFunctionLibrary::SetCustomFocusUIOnly(UWidget* Target, UUserWidget* ParentWidget, bool ValidateParent) {
}

void UMorUIFocusFunctionLibrary::SetCustomFocusGameAndUI(UWidget* Target, UUserWidget* ParentWidget, bool ValidateParent) {
}

void UMorUIFocusFunctionLibrary::SetCustomFocus(UWidget* Target, UUserWidget* ParentWidget, bool ValidateParent) {
}

void UMorUIFocusFunctionLibrary::RestoreCustomFocus(FMorCustomFocusRememberer FocusRememberer) {
}

FMorCustomFocusRememberer UMorUIFocusFunctionLibrary::RememberCustomFocus(const UObject* WorldContext) {
    return FMorCustomFocusRememberer{};
}

bool UMorUIFocusFunctionLibrary::IsMouseFocusEvent(const FFocusEvent& FocusEvent) {
    return false;
}

void UMorUIFocusFunctionLibrary::DeactivateCustomFocus(const UObject* WorldContext, APlayerController* FocusUser) {
}

void UMorUIFocusFunctionLibrary::ActivateCustomFocus(UUserWidget* CustomFocusParent) {
}


