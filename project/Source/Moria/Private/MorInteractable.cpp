#include "MorInteractable.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AMorInteractable::AMorInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DisplayName = FText::FromString(TEXT("UI NAME"));
    this->bDoNotAnimateWithAbility = false;
    this->InteractAnim_Start = NULL;
    this->InteractAnim = NULL;
    this->InteractAnim_Collect = NULL;
    this->AnimateMaxRange = -1.00f;
    this->EquipItemForAnim = NULL;
    this->InteractTime = -1.00f;
    this->InteractDistanceMultiplier = 1.00f;
    this->InteractPriority = 100;
    this->bCanHaveOutline = true;
    this->bAlignCharacterOnInteraction = false;
    this->LastInteractor = NULL;
    this->InteractionPoint = NULL;
    this->InteractCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractCollider"));
    this->bHaveVfxShown = false;
    this->bTickRateReductionEnabled = true;
    this->HighTickRateDistance = 1000.00f;
    this->HighTickRateInterval = 0.10f;
    this->LowTickRateDistance = 2000.00f;
    this->LowTickRateInterval = 2.00f;
    this->bInteracted = false;
    this->bIsInteractive = true;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->InteractCollider->SetupAttachment(RootComponent);
}

void AMorInteractable::SetLastInteractor(AMorCharacter* Interactor) {
}

void AMorInteractable::SetIsInteractive(bool bValue) {
}

void AMorInteractable::SetInteractAnim(UAnimMontage* NewAnimMontage) {
}




bool AMorInteractable::GetIsInteractive() const {
    return false;
}

FVector AMorInteractable::GetInteractionTargetLocation() const {
    return FVector{};
}

EMorInteractableType AMorInteractable::GetInteractableType() const {
    return EMorInteractableType::MorInteractable;
}

FText AMorInteractable::GetDisplayName() const {
    return FText::GetEmpty();
}

UTexture2D* AMorInteractable::GetDisplayIcon() const {
    return NULL;
}

void AMorInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorInteractable, bIsInteractive);
}


