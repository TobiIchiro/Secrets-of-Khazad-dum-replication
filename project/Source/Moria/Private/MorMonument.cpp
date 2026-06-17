#include "MorMonument.h"
#include "Components/StaticMeshComponent.h"
#include "FGKFilteredInventoryComponent.h"
#include "MorBreakableComponent.h"
#include "Net/UnrealNetwork.h"

AMorMonument::AMorMonument(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Inventory = CreateDefaultSubobject<UFGKFilteredInventoryComponent>(TEXT("Monument Inventory"));
    this->MonumentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Monument Mesh"));
    this->StartSongAbility = NULL;
    this->ActiveBuildersCount = 0;
    this->Breakable = CreateDefaultSubobject<UMorBreakableComponent>(TEXT("Breakable"));
    this->MonumentType = EMonumentType::None;
    this->SettlementManager = NULL;
    this->MonumentMesh->SetupAttachment(RootComponent);
}

void AMorMonument::RemoveAllBuilderSlots() {
}

void AMorMonument::OnSingingDone(bool bIsAborted, uint8 SongID, const FMorSongInstanceData& SongInstanceData) {
}

void AMorMonument::OnRep_ActiveBuildersCount() {
}

void AMorMonument::OnBreak(bool bPreRuined) {
}

bool AMorMonument::IsRevealStage() const {
    return false;
}

bool AMorMonument::IsMonumentSetup() const {
    return false;
}

bool AMorMonument::HasRevealStage() const {
    return false;
}

FMorMonumentWorkTimeEstimate AMorMonument::GetWorkTimeEstimate() const {
    return FMorMonumentWorkTimeEstimate{};
}

EMonumentType AMorMonument::GetMonumentType() const {
    return EMonumentType::None;
}

int32 AMorMonument::GetCurrentBuildStage() const {
    return 0;
}

int32 AMorMonument::GetBuildStagesCount() const {
    return 0;
}

float AMorMonument::GetBuildStageProgress() const {
    return 0.0f;
}

void AMorMonument::AddBuilderSlots(TArray<USceneComponent*> SlotPositions) {
}

void AMorMonument::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorMonument, ActiveBuildersCount);
}


