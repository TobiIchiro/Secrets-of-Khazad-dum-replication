#include "FGKPlayerCameraManager.h"
#include "FGKActorFSMComponent.h"

AFGKPlayerCameraManager::AFGKPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->ExtraPullbackOverrideDampening = 0.10f;
    this->PullbackScaleOverrideDampening = 0.10f;
    this->ProbeType = EFGKProbeType::Sphere;
    this->ProbeRadius = 4.00f;
    this->bProbeDisallowIntersect = true;
    this->GridProbeBoxWidth = 40.00f;
    this->GridProbeBoxDepth = 2.00f;
    this->GridProbeConeAngle = 5.00f;
    this->GridSize = 4;
    this->GridProbeHillInfluence = 2.00f;
    this->GridProbeSmoothingStrengthMin = 0.05f;
    this->GridProbeSmoothingStrengthMax = 0.20f;
    this->GridProbeInfluencingCollision = NULL;
    this->ControlledCharacter = NULL;
    this->CameraFSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("CameraFSMComp"));
    this->LastActiveLeaf = NULL;
}

void AFGKPlayerCameraManager::OnPossess(AFGKBaseCharacter* NewCharacter) {
}

AFGKBaseCharacter* AFGKPlayerCameraManager::GetControlledCharacter() const {
    return NULL;
}

UFGKActorFSMComponent* AFGKPlayerCameraManager::GetCameraFSMComp() const {
    return NULL;
}

void AFGKPlayerCameraManager::DetachSceneCaptureComponent(USceneCaptureComponent* CaptureComponent) {
}

void AFGKPlayerCameraManager::AttachSceneCaptureComponent(USceneCaptureComponent* CaptureComponent) {
}


