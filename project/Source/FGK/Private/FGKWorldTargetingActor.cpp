#include "FGKWorldTargetingActor.h"
#include "FGKTargetableComponent.h"

AFGKWorldTargetingActor::AFGKWorldTargetingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->TargetComp = CreateDefaultSubobject<UFGKTargetableComponent>(TEXT("TargetComp"));
    this->Character = NULL;
}


