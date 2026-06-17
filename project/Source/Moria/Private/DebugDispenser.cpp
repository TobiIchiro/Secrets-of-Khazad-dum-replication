#include "DebugDispenser.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Net/UnrealNetwork.h"

ADebugDispenser::ADebugDispenser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Dispenser"));
    this->AmountToTakeAtOnce = 1;
    this->bDestroyOnEmpty = false;
    this->AmountRemaining = 0;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->bHidePartial = false;
    this->bHideProportional = false;
    this->bHideInNameOrder = false;
    this->DebugText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("DebugText"));
    this->DebugText->SetupAttachment(Mesh);
    this->Mesh->SetupAttachment(RootComponent);
}

void ADebugDispenser::UpdateName_Implementation() {
}

void ADebugDispenser::RemoveItem(int32 Count) {
}

FItemCount ADebugDispenser::GetContents() const {
    return FItemCount{};
}

void ADebugDispenser::ContentsChanged_Implementation() {
}

void ADebugDispenser::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADebugDispenser, Stock);
    DOREPLIFETIME(ADebugDispenser, AmountRemaining);
}


