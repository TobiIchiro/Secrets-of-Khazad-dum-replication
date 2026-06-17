#include "MorReturnStone.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AMorReturnStone::AMorReturnStone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReadyCircle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ColoredCircle"));
    this->ReturnConfirmPopup = NULL;
    this->NumberOfPlayers = 0;
    this->ConfirmPopupInstance = NULL;
    this->ReadyCircle->SetupAttachment(RootComponent);
}

void AMorReturnStone::RequestReturnViaInteract() {
}

void AMorReturnStone::RequestReturnConfirmed(UFGKPopup* PopupInstance) {
}

void AMorReturnStone::RequestReturnCanceled(UFGKPopup* PopupInstance) {
}

void AMorReturnStone::CircleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AMorReturnStone::CircleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AMorReturnStone::AreAllPlayersPresent() const {
    return false;
}

void AMorReturnStone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorReturnStone, NumberOfPlayers);
}


