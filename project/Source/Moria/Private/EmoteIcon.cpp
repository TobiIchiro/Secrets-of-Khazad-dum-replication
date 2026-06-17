#include "EmoteIcon.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AEmoteIcon::AEmoteIcon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Icon = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->Billboard->SetupAttachment(RootComponent);
}

void AEmoteIcon::ImageChanged() {
}

void AEmoteIcon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEmoteIcon, Icon);
}


