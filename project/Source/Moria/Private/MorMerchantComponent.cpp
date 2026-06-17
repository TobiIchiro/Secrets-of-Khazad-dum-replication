#include "MorMerchantComponent.h"
#include "Net/UnrealNetwork.h"

UMorMerchantComponent::UMorMerchantComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInteractable = true;
    this->Character = NULL;
    this->LastInteractor = NULL;
    this->InteractableManager = NULL;
    this->bWaitingForInteractionRegistration = false;
    this->ConversationComponent = NULL;
}

void UMorMerchantComponent::RegisterToInteractableManager() {
}

void UMorMerchantComponent::OnRep_MerchantHandle() {
}

FMorMerchantRowHandle UMorMerchantComponent::GetMerchantRowHandle() const {
    return FMorMerchantRowHandle{};
}

void UMorMerchantComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorMerchantComponent, Merchant);
}


