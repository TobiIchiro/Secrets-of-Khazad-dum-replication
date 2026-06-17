#include "FGKSfxManager.h"

AFGKSfxManager::AFGKSfxManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

UAkSwitchValue* AFGKSfxManager::GetAkSwitchValueForSurface(TEnumAsByte<EPhysicalSurface> Surface) const {
    return NULL;
}


