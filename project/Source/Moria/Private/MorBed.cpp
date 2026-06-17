#include "MorBed.h"
#include "Components/SceneComponent.h"
#include "MorPreciousssComponent.h"

AMorBed::AMorBed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RestEffect = NULL;
    this->bIsBeingUsed = false;
    this->PreciousssComponent = CreateDefaultSubobject<UMorPreciousssComponent>(TEXT("Preciousss"));
    this->LieDownComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LieDownLocation"));
    this->LieDownComponent->SetupAttachment(RootComponent);
}

TArray<FGuid> AMorBed::GetSettlementBedlessNPCs() {
    return TArray<FGuid>();
}

void AMorBed::AssignToNPC(FGuid NpcGuid) {
}


