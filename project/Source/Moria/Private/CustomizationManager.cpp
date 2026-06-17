#include "CustomizationManager.h"
#include "Net/UnrealNetwork.h"

UCustomizationManager::UCustomizationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTestingMode = false;
    this->bIsDwarfCustomization = false;
    this->CustomizationDataTables = NULL;
    this->bUsePresetOnly = false;
    this->bRandomize = false;
    this->bSkipBuildOnInit = false;
    this->bRandomizeDefaultPresetCharacter = false;
    this->bHighAsyncLoadPriority = false;
    this->bNetworkDemoMode = false;
}

void UCustomizationManager::UnmergeMeshes() {
}

void UCustomizationManager::StartEmotePreview(int32 Index) {
}

void UCustomizationManager::SetVoice(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetTattooColor(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetTattoo(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetSkinColor(const FDataTableRowHandle& ColorHandleIn) {
}

void UCustomizationManager::SetScar(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetPersonality(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetOrigin(const FDataTableRowHandle& HandleIn, bool bUpdateCrafts, bool bApplyStarterCrafts) {
}

void UCustomizationManager::SetMorph(const EMeshMorphs& MorphIn, const float ValueIn) {
}

void UCustomizationManager::SetHead(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetHairDecorativeColor(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetHairColor(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetHair(const FDataTableRowHandle& HandleIn, bool UseHelmetHair) {
}

void UCustomizationManager::SetEyeColor(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetCustomizationProperty(ECharacterCustomizationPropertyType PropertyType, const FDataTableRowHandle& PropertyRow) {
}

void UCustomizationManager::SetCraftItem(ECharacterCustomizationPropertyType PropertyType, const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetCraft(const FDataTableRowHandle& HandleIn, bool bClearOverrides) {
}

void UCustomizationManager::SetCharacterPreset(FDataTableRowHandle HandleIn, bool bClearCraftOverrides) {
}

void UCustomizationManager::SetCharacterName(const FString& NewCharacterName) {
}

void UCustomizationManager::SetBody(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetBeardDecorativeColor(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetBeardColor(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetBeard(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetBackpackColor(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::SetBackpack(const FDataTableRowHandle& HandleIn) {
}

void UCustomizationManager::Server_SetCustomizations_Implementation(const FCharacterCustomizations& CustomizationsIn) {
}

void UCustomizationManager::RemergeMeshes() {
}

void UCustomizationManager::Randomize() {
}

void UCustomizationManager::PlayRandomVoicePreview() {
}

void UCustomizationManager::OnRep_Customizations() {
}

void UCustomizationManager::MergeMeshes() {
}

void UCustomizationManager::LocalSetupOnPossession(AController* Controller) {
}

bool UCustomizationManager::IsLoadingFinished() const {
    return false;
}

float UCustomizationManager::GetMorph(const EMeshMorphs& MorphIn) {
    return 0.0f;
}

FString UCustomizationManager::GetCharacterName() {
    return TEXT("");
}

void UCustomizationManager::AsyncLoadAssets() {
}

void UCustomizationManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCustomizationManager, Customizations);
}


