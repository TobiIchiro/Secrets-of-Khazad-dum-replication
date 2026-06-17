#include "MorInteractComponent.h"

UMorInteractComponent::UMorInteractComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->InteractAbility = NULL;
    this->bSelectWithCamera = false;
    this->MaxAngle2D = 90.00f;
    this->Character = NULL;
    this->InteractableManager = NULL;
}

void UMorInteractComponent::SetInteractableCustomName(const TScriptInterface<IMorInteractableInterface>& Interactable, const FString& CustomName) {
}

void UMorInteractComponent::ServerSetInteractableCustomName_Implementation(UObject* ObjectInteractable, const FString& CustomName) {
}

void UMorInteractComponent::ServerInteract_Implementation(UObject* ObjectInteractable, FInteractContext InteractContext) {
}
bool UMorInteractComponent::ServerInteract_Validate(UObject* ObjectInteractable, FInteractContext InteractContext) {
    return true;
}

void UMorInteractComponent::OverlapEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UMorInteractComponent::OverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TScriptInterface<IMorInteractableInterface> UMorInteractComponent::GetSelectedInteractable() const {
    return NULL;
}

TScriptInterface<IMorInteractableInterface> UMorInteractComponent::GetNearestInteractableOfType(UClass* InteractableClass, bool bIgnoreVisibleInteractCheck) const {
    return NULL;
}


