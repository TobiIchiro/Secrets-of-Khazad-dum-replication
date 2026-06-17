#include "MorRecipeCostComponent.h"

UMorRecipeCostComponent::UMorRecipeCostComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMorRecipeCostComponent::ServerPayRecipeCost_Implementation(AActor* Crafter, const TArray<FMorRequiredRecipeMaterial>& Materials, const FFGKInventoryPredicate& Predicate) {
}
bool UMorRecipeCostComponent::ServerPayRecipeCost_Validate(AActor* Crafter, const TArray<FMorRequiredRecipeMaterial>& Materials, const FFGKInventoryPredicate& Predicate) {
    return true;
}

void UMorRecipeCostComponent::MulticastReportFreeRecipe_Implementation() {
}


