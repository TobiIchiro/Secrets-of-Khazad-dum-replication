#include "MorUIFunctionLibrary.h"

UMorUIFunctionLibrary::UMorUIFunctionLibrary() {
}

void UMorUIFunctionLibrary::UpdateBreadcrumbCounts(const UObject* WorldContext) {
}

bool UMorUIFunctionLibrary::TryClosePopUp(const UObject* WorldContext) {
    return false;
}

UMorPopUpWidget* UMorUIFunctionLibrary::ShowPopUpWithoutCallback(APlayerController* Owner, FPopUpOptions PopUpOptions, UObject* ParentWidget) {
    return NULL;
}

UMorPopUpWidget* UMorUIFunctionLibrary::ShowPopUp(APlayerController* Owner, FPopUpOptions PopUpOptions, const FOnPopUpButtonClicked& OnClickedEvent, UObject* ParentWidget) {
    return NULL;
}

void UMorUIFunctionLibrary::SetIconOffsetParameters(const UObject* WorldContext, UMaterialInstanceDynamic* MaterialInstance, const UTexture* Texture, const FVector2D& NormOffset, float Rotation, float Scale) {
}

void UMorUIFunctionLibrary::SetCustomNavigationConfig(bool bKeyNavigation, bool bTabNavigation, bool bAnalogNavigation) {
}

void UMorUIFunctionLibrary::SaveCurrentWorld(const UObject* WorldContext) {
}

void UMorUIFunctionLibrary::NativeRecordTutorialBreadcrumbs(const UObject* WorldContext, const FMorTutorialRowHandle& RowHandle) {
}

void UMorUIFunctionLibrary::NativeRecordTipBreadcrumbs(const UObject* WorldContext, const FMorTipRowHandle& RowHandle) {
}

void UMorUIFunctionLibrary::NativeRecordLoreBreadcrumbs(const UObject* WorldContext, const FMorLoreRowHandle& RowHandle) {
}

void UMorUIFunctionLibrary::NativeRecordItemRecipeBreadcrumbs(const UObject* WorldContext, const FMorItemRecipeDefinition& RecipeDefinition) {
}

void UMorUIFunctionLibrary::NativeRecordConstructionRecipeBreadcrumbs(const UObject* WorldContext, const FMorConstructionRecipeDefinition& RecipeDefinition) {
}

void UMorUIFunctionLibrary::NativeForgetLoreBreadcrumbs(const UObject* WorldContext, const FMorLoreRowHandle& RowHandle) {
}

void UMorUIFunctionLibrary::NativeForgetItemRecipeBreadcrumbs(const UObject* WorldContext, const FMorItemRecipeDefinition& RecipeDefinition) {
}

void UMorUIFunctionLibrary::NativeForgetConstructionRecipeBreadcrumbs(const UObject* WorldContext, const FMorConstructionRecipeDefinition& RecipeDefinition) {
}

void UMorUIFunctionLibrary::NativeClearTutorialBreadcrumbs(const UObject* WorldContext, const FMorTutorialRowHandle& RowHandle) {
}

void UMorUIFunctionLibrary::NativeClearTipBreadcrumbs(const UObject* WorldContext, const FMorTipRowHandle& RowHandle) {
}

void UMorUIFunctionLibrary::NativeClearLoreBreadcrumbs(const UObject* WorldContext, const FMorLoreRowHandle& RowHandle) {
}

void UMorUIFunctionLibrary::NativeClearItemRecipeBreadcrumbs(const UObject* WorldContext, const FMorItemRecipeDefinition& RecipeDefinition) {
}

void UMorUIFunctionLibrary::NativeClearConstructionRecipeBreadcrumbs(const UObject* WorldContext, const FMorConstructionRecipeDefinition& RecipeDefinition) {
}

FSlateBrush UMorUIFunctionLibrary::GetPlatformImageForKeySet(const TArray<FKey>& InKeys, const ECommonInputType& CurrentInputType, const FName& CurrentControllerName, bool& Success) {
    return FSlateBrush{};
}

FSlateBrush UMorUIFunctionLibrary::GetPlatformImageForKey(const FKey& InKey, const ECommonInputType& CurrentInputType, const FName& CurrentControllerName, bool& Success) {
    return FSlateBrush{};
}

void UMorUIFunctionLibrary::GetIconOffsetByTexture(const UObject* WorldContext, UDataTable* DataTable, const TSoftObjectPtr<UTexture>& Texture, FMorIconOffset& OutIconOffset, bool& bOutDefault) {
}

void UMorUIFunctionLibrary::GetIconOffsetByItemDefinition(const UObject* WorldContext, UDataTable* DataTable, const FMorItemDefinition& ItemDefinition, FMorIconOffset& OutIconOffset, bool& bOutDefault) {
}

void UMorUIFunctionLibrary::GetIconOffsetByItem(const UObject* WorldContext, UDataTable* DataTable, const AInventoryItem* InventoryItem, FMorIconOffset& OutIconOffset, bool& bOutDefault) {
}

UMorBreadcrumbsSubsystem* UMorUIFunctionLibrary::GetBreadcrumbsSubsystem(const UObject* WorldContext) {
    return NULL;
}

TArray<FInputActionKeyMapping> UMorUIFunctionLibrary::GetActionMappingsByName(const FName& ActionName, APlayerController* PlayerController) {
    return TArray<FInputActionKeyMapping>();
}


