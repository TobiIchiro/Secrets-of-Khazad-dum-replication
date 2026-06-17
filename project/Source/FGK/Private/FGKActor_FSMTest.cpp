#include "FGKActor_FSMTest.h"
#include "FGKActorFSMComponent.h"

AFGKActor_FSMTest::AFGKActor_FSMTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->FSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("FSMComp"));
}


