#include "MorConstructionSite.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AMorConstructionSite::AMorConstructionSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProgressMaterial = NULL;
    this->AttachGroup = CreateDefaultSubobject<USceneComponent>(TEXT("AttachGroup"));
    this->ComponentGroup = CreateDefaultSubobject<USceneComponent>(TEXT("ComponentGroup"));
    this->TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
    this->AttachGroup->SetupAttachment(RootComponent);
    this->ComponentGroup->SetupAttachment(RootComponent);
    this->TriggerArea->SetupAttachment(ComponentGroup);
}


void AMorConstructionSite::OnBuildModeStarted(EBuildMode Mode) {
}

void AMorConstructionSite::OnBuildModeEnded(EBuildMode Mode) {
}

bool AMorConstructionSite::HasAllMaterials() const {
    return false;
}

EInteractState AMorConstructionSite::GetDepositState_Implementation(const ACharacter* Interactor) const {
    return EInteractState::Interactable;
}

FText AMorConstructionSite::GetDepositEnabledText_Implementation(const FText& EnabledTextFormat, const ACharacter* Interactor) const {
    return FText::GetEmpty();
}

FText AMorConstructionSite::GetDepositDisabledText_Implementation(const FText& DisabledTextFormat, const ACharacter* Interactor) const {
    return FText::GetEmpty();
}

FText AMorConstructionSite::GetBuildText_Implementation(const FText& TextFormat, const ACharacter* Interactor) const {
    return FText::GetEmpty();
}

EInteractState AMorConstructionSite::GetBuildState_Implementation(const ACharacter* Interactor) const {
    return EInteractState::Interactable;
}

void AMorConstructionSite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorConstructionSite, RemainingRequiredMaterials);
    DOREPLIFETIME(AMorConstructionSite, RecipeHandleInternal);
    DOREPLIFETIME(AMorConstructionSite, DepositedMaterials);
}


