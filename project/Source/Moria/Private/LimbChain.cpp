#include "LimbChain.h"

FLimbChain::FLimbChain() {
    this->bEnableCollisionCheck = false;
    this->bAlwaysKeepAboveGround = false;
    this->bAlignBoneAxisWithGround = false;
    this->bDetectContactWithGroundFromAnim = false;
    this->DistanceFromGroundThreshold = 0.00f;
    this->DistanceFromGroundMax = 0.00f;
}

