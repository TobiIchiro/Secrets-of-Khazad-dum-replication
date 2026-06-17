#include "FGKRagdollState.h"

UFGKRagdollState::UFGKRagdollState() {
    this->PelvisSocketName = TEXT("pelvis");
    this->RootName = TEXT("Root");
    this->PoseSnapshot = TEXT("RagdollPose");
    this->bTimeToRestartEnabled = true;
    this->bCanGetUpInTheEnd = false;
    this->TimeToRestart = 1.00f;
}


