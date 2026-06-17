#include "FGKCharacterState.h"
#include "Templates/SubclassOf.h"

UFGKCharacterState::UFGKCharacterState() {
    this->bRemovePriorVelocity = false;
    this->bApplyDirectMovement = false;
    this->bEquipRequiredItemOnBegin = true;
    this->bUnequipRequiredItemOnEnd = false;
    this->bUnequipOther = true;
    this->bRequireAlive = false;
    this->bOverrideMovementMode = false;
    this->bCarryOverVelocity = false;
    this->MovementMoveOverride = MOVE_None;
    this->CustomMovementMoveOverride = 0;
    this->MoveInputExtraScale = 1.30f;
    this->GroundFrictionOverride = -1.00f;
    this->GravityScaleOverride = -1.00f;
    this->RequiredItemType = NULL;
    this->GameplayEffectToApply = NULL;
    this->GravityScaleCurve = NULL;
    this->Character = NULL;
    this->MoveComp = NULL;
    this->Capsule = NULL;
    this->SkelMesh = NULL;
    this->AnimInstance = NULL;
    this->InventoryComp = NULL;
    this->EquipComp = NULL;
    this->HealthComp = NULL;
}

AActor* UFGKCharacterState::SpawnActor(TSubclassOf<AActor> ActorClass, FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner) {
    return NULL;
}

void UFGKCharacterState::SetMainMeshAndInstance() {
}

void UFGKCharacterState::OnNotifyStateEndReceived(UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation) {
}

void UFGKCharacterState::OnNotifyStateBeginReceived(UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation, float TotalDuration) {
}

void UFGKCharacterState::OnNotifyReceived(UFGKAnimNotify* Notify) {
}

bool UFGKCharacterState::IsNotifyStateRelevant(UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation) {
    return false;
}

bool UFGKCharacterState::IsNotifyRelevant(UFGKAnimNotify* Notify) {
    return false;
}


