#include "MorConstructionManager.h"
#include "Net/UnrealNetwork.h"

AMorConstructionManager::AMorConstructionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreplacedBlockStabilityCostMultiplier = 0.50f;
    this->StabilityNeighborBoxExtentMinimum = 30.00f;
    this->StabilityNeighborSearchDistance = 6.00f;
    this->StabilityNeighborSearchCornerDeadZone = 3.00f;
    this->ConnectionPointGridSizeEpsilon = 50.00f;
    this->ConstructionEffectClass = NULL;
    this->StabilityLossVFX = NULL;
    this->StabilityLossSFX = NULL;
    this->DefaultConstructVFX = NULL;
    this->DefaultConstructSFX = NULL;
    this->DefaultDeconstructVFX = NULL;
    this->DefaultDeconstructSFX = NULL;
    this->DroppedItemClass = NULL;
    this->DropEjectForce = 100.00f;
    this->DefaultConstructionFailureMessage = FText::FromString(TEXT("You are unable to build this."));
    this->AutoFoundationMaxGap = 150.00f;
    this->MarginalStability = 30.00f;
    this->ApexAvailabilityThreshold = 12;
    this->VOOnRepairingConstruction = NULL;
}

void AMorConstructionManager::RegisterRepairedConstruction(AActor* NewActor) {
}

void AMorConstructionManager::OnRep_Bases() {
}

void AMorConstructionManager::MulticastDoStabilityLossEffects_Implementation(const FVector& Location, const TArray<FBoxSphereBounds>& AllMeshBounds) {
}

void AMorConstructionManager::MulticastDoDeconstructionEffects_Implementation(const FVector& Location, const FRotator& Rotation, const TArray<FBoxSphereBounds>& AllMeshBounds) {
}

void AMorConstructionManager::MulticastDoConstructionEffects_Implementation(const FVector& Location, const FRotator& Rotation, const TArray<FBoxSphereBounds>& AllMeshBounds) {
}

void AMorConstructionManager::MulticastDestroyConstruction_Implementation(AActor* Actor) {
}

bool AMorConstructionManager::IsValidBase(FMorBase Base) const {
    return false;
}

FVector AMorConstructionManager::GetDefaultGridSize() const {
    return FVector{};
}

TArray<FMorPermitData> AMorConstructionManager::GetConstructionPermitsForLocation(const FVector& Location) {
    return TArray<FMorPermitData>();
}

FMorBase AMorConstructionManager::GetBaseForPermit(UMorConstructionPermitComponent* Permit) const {
    return FMorBase{};
}

FMorBase AMorConstructionManager::GetBaseContainingLocation(const FVector& Location, EFGKGetDefinitionResult& OutResult) const {
    return FMorBase{};
}

bool AMorConstructionManager::Equality_BaseData(FMorBase A, FMorBase B) {
    return false;
}

bool AMorConstructionManager::AreBaseBoundsVisible() const {
    return false;
}

void AMorConstructionManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorConstructionManager, Bases);
}


