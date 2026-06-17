#include "MorBubbleInstance.h"
#include "Components/SceneComponent.h"
#include "MorBubbleBreakableInstanceHandler.h"
#include "Net/UnrealNetwork.h"

AMorBubbleInstance::AMorBubbleInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->BreakableInstanceHandler = CreateDefaultSubobject<UMorBubbleBreakableInstanceHandler>(TEXT("BreakableInstanceHandler"));
    this->WorldLayoutBubble = NULL;
    this->ConstructionHandler = NULL;
}

void AMorBubbleInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorBubbleInstance, ConstructionHandler);
}


