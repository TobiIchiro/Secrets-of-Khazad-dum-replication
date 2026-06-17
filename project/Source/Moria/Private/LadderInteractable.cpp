#include "LadderInteractable.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MorInteractionPoint.h"
#include "Net/UnrealNetwork.h"

ALadderInteractable::ALadderInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionPoint = CreateDefaultSubobject<UMorInteractionPoint>(TEXT("InteractionPoint"));
    this->BoxComponent_Ladder = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_Ladder"));
    this->BoxComponent_Above = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_Above"));
    this->Junction = CreateDefaultSubobject<USceneComponent>(TEXT("Junction"));
    this->LadderBody = CreateDefaultSubobject<USceneComponent>(TEXT("LadderBody"));
    this->LadderSegmentMesh = NULL;
    this->PlatformMesh = NULL;
    this->Platform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformVisuals"));
    this->StaticMesh = NULL;
    this->InteractionPointOffsetZ = 150.00f;
    this->CloseDistance = 50.00f;
    this->TooHighDistance = 50.00f;
    this->AutoReattachMinDelay = 1.00f;
    this->bIsRopeLadder = false;
    this->BoxHeightPadding = 100.00f;
    this->MinLengthVertical = 200.00f;
    this->MaxLengthVertical = 500.00f;
    this->StaticLength = 300.00f;
    this->SpaceToLeaveAboveFloor = 150.00f;
    this->VisualsBottomOffset = 25.00f;
    this->VisualsHorizontalOffset = 100.00f;
    this->AboveBoxOffsetX = -20.00f;
    this->DistanceBetweenRails = 80.00f;
    this->RailThickness = 5.00f;
    this->BarSpacing = 25.00f;
    this->StandardBarSpacing = 24.50f;
    this->BarLength = 90.00f;
    this->BarThickness = 3.50f;
    this->LowestBarAttachableFromBottom = 2;
    this->LengthVertical = 0.00f;
    this->BoxComponent_Above->SetupAttachment(RootComponent);
    this->BoxComponent_Ladder->SetupAttachment(RootComponent);
    this->Junction->SetupAttachment(RootComponent);
    this->LadderBody->SetupAttachment(Junction);
    this->Platform->SetupAttachment(Junction);
}

void ALadderInteractable::OnRep_LengthVertical() {
}

void ALadderInteractable::MulticastEndInteract_Implementation(ACharacter* Interactor) {
}

void ALadderInteractable::MulticastBeginInteract_Implementation(ACharacter* Interactor) {
}

void ALadderInteractable::EndOverlapRope(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ALadderInteractable::EndOverlapAbove(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ALadderInteractable::BeginOverlapRope(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ALadderInteractable::BeginOverlapAbove(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ALadderInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALadderInteractable, LengthVertical);
}


