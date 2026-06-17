#include "CraftingComponent.h"
#include "Net/UnrealNetwork.h"

UCraftingComponent::UCraftingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraftInitiator = NULL;
}

void UCraftingComponent::ServerStartCraft_Implementation(UCraftingComponent* TargetComponent, AActor* Crafter, const FName& RecipeName, const FFGKInventoryPredicate& Predicate) {
}
bool UCraftingComponent::ServerStartCraft_Validate(UCraftingComponent* TargetComponent, AActor* Crafter, const FName& RecipeName, const FFGKInventoryPredicate& Predicate) {
    return true;
}

void UCraftingComponent::ServerCancelCraft_Implementation(UCraftingComponent* TargetComponent, AActor* Crafter, const FName& RecipeName) {
}
bool UCraftingComponent::ServerCancelCraft_Validate(UCraftingComponent* TargetComponent, AActor* Crafter, const FName& RecipeName) {
    return true;
}

void UCraftingComponent::MulticastStartCraftResult_Implementation(const TArray<ECraftFailureReason>& CraftResult, UCraftingComponent* TargetComponent, AActor* Crafter, const FName& RecipeName) {
}

void UCraftingComponent::MulticastCraftFinished_Implementation(const FName& RecipeName) {
}

void UCraftingComponent::MulticastCancelCraftResult_Implementation(bool bSuccess, UCraftingComponent* TargetComponent, AActor* Crafter, const FName& RecipeName) {
}

void UCraftingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCraftingComponent, CraftInitiator);
}


