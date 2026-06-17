#include "FGKChangeSkelMeshAndPlayAnimState.h"

UFGKChangeSkelMeshAndPlayAnimState::UFGKChangeSkelMeshAndPlayAnimState() {
    this->bLoop = false;
    this->bCanFinish = false;
    this->bUseOverrideRelativeScale = false;
    this->bHideAllSubMeshes = true;
    this->bDisableAllCollisionButRoot = true;
    this->bAttackWeaponToSocket = false;
    this->WeaponScale = 1.00f;
    this->ChangeToSkeletonMesh = NULL;
    this->Animation = NULL;
}


