#include "MorBreakable.h"
#include "Components/SceneComponent.h"

AMorBreakable::AMorBreakable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->bDefaultToNetDormant = true;
    this->bSaveDormancyAwakeOnPostStore = false;
    this->BreakableComponent = NULL;
}

void AMorBreakable::SetSaveGameObjectDormancyState(EMorSaveGameObjectDormancyState DormancyState) {
}

void AMorBreakable::OnHealthStateChange() {
}

void AMorBreakable::BlueprintPreRestoreDestroy_Implementation() {
}

void AMorBreakable::BlueprintPostStore_Implementation() {
}


