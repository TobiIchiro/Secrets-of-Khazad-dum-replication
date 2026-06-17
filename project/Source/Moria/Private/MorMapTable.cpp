#include "MorMapTable.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AMorMapTable::AMorMapTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CountdownTime = 5;
    this->ReadyCircle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ColoredCicle"));
    this->TableState = EMapTableState::Idle;
    this->LastCountedSecond = 0;
    this->ReadyCircle->SetupAttachment(RootComponent);
}

void AMorMapTable::OnRep_TableState() {
}

void AMorMapTable::OnRep_SecondsChanged() {
}

void AMorMapTable::CircleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AMorMapTable::CircleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMorMapTable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorMapTable, TableState);
    DOREPLIFETIME(AMorMapTable, LastCountedSecond);
}


