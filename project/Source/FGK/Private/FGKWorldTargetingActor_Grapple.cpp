#include "FGKWorldTargetingActor_Grapple.h"

AFGKWorldTargetingActor_Grapple::AFGKWorldTargetingActor_Grapple(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysAimFromCamera = true;
    this->AimFromCameraAtThisAngleFromHorizontal = 5.00f;
    this->bHitFloors = true;
    this->InterpolateSpeed = 0.00f;
    this->AddVelocityToDistanceBase = 0.00f;
    this->PushOutFromSurface = 10.00f;
    this->WallCheckAttempts = 0;
    this->bGoUpEvenIfYouDontFindTheTop = true;
    this->WallCheckHeight = 500.00f;
    this->GroundRecheckAttempts = 0;
    this->AddVelocityToGroundDistanceBase = 0.00f;
    this->GroundCheckHeight = 200.00f;
    this->GroundCheckDepth = 200.00f;
}


