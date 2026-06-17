#include "MorBuildingComponent.h"

UMorBuildingComponent::UMorBuildingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConstructionSiteCDO = NULL;
}

FTransform UMorBuildingComponent::GetBuildTargetTransform() const {
    return FTransform{};
}

UBuildOverlayWidget* UMorBuildingComponent::GetActiveBuildingWidget() {
    return NULL;
}

void UMorBuildingComponent::ClientNotifyConstructionFailure_Implementation(const TArray<EBuildFailureReason>& FailReasons) {
}
bool UMorBuildingComponent::ClientNotifyConstructionFailure_Validate(const TArray<EBuildFailureReason>& FailReasons) {
    return true;
}

bool UMorBuildingComponent::CanBuildWithProcess(const FMorConstructionRecipeDefinition& Recipe, const FTransform& TargetTransform, const EBuildProcess ChosenProcess, TArray<EBuildFailureReason>& OutFailReasons) const {
    return false;
}

bool UMorBuildingComponent::CanBuild(const FMorConstructionRecipeDefinition& Recipe, const FTransform& TargetTransform, TArray<EBuildFailureReason>& OutFailReasons) const {
    return false;
}

void UMorBuildingComponent::BuildNewConstruction_Implementation(const FMorConstructionRecipeRowHandle& RecipeHandle, AMorCharacter* Player, const FTransform& Transform, const EBuildProcess ChosenProcess, bool bBuildAsFoundation, AActor* ConnectedTo, float StabilityEstimate) {
}
bool UMorBuildingComponent::BuildNewConstruction_Validate(const FMorConstructionRecipeRowHandle& RecipeHandle, AMorCharacter* Player, const FTransform& Transform, const EBuildProcess ChosenProcess, bool bBuildAsFoundation, AActor* ConnectedTo, float StabilityEstimate) {
    return true;
}


