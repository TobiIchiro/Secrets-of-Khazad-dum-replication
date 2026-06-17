#include "RopePhy.h"

URopePhy::URopePhy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartMeshTypeDARC = NULL;
    this->Mesh01TypeDARC = NULL;
    this->Mesh02TypeDARC = NULL;
    this->Mesh03TypeDARC = NULL;
    this->Mesh04TypeDARC = NULL;
    this->EndMeshTypeDARC = NULL;
    this->SplineMeshPRC = NULL;
    this->SphereCollPRC = NULL;
    this->SplinePRC = NULL;
    this->UserSplinePRC = NULL;
    this->SplineBuildPRC = NULL;
    this->PhysicsConstraintPRC = NULL;
    this->CollUnitScaleCRC = 0.20f;
    this->AngularDampeningCRC = 1.50f;
    this->LinearDampeningCRC = 0.75f;
    this->VelocitySolverCRC = 16.00f;
    this->PositionSolverCRC = 32.00f;
    this->StabilizationThresholdMultiplierCRC = 6.00f;
    this->SleepThresholdMultiplierCRC = 0.10f;
    this->InertiaTensorScaleCRC = 1.40f;
    this->GenericSharedTagCRC = TEXT("RopeCutting");
    this->MassCRC = 0.00f;
    this->MassScaleCRC = 2.00f;
    this->InstanceSpecificIDStrBRC = TEXT("Default__RopePhy");
    this->InstanceSpecificIDTagBRC = TEXT("Default__RopePhy");
    this->UnitLengthBVRC = 15.00f;
    this->UsedInGameEG = true;
    this->UserSplineSetToSocketLocBRC = false;
    this->HasBuiltBRC = false;
    this->StartMeshWidthSMRC = 0.00f;
    this->StartMeshMaterial01SMRC = NULL;
    this->StartMeshMaterial02SMRC = NULL;
    this->Mesh01WidthSMRC = 0.00f;
    this->Mesh01Material01SMRC = NULL;
    this->Mesh01Material02SMRC = NULL;
    this->Mesh02WidthSMRC = 0.00f;
    this->Mesh02Material01SMRC = NULL;
    this->Mesh02Material02SMRC = NULL;
    this->Mesh03WidthSMRC = 0.00f;
    this->Mesh03Material01SMRC = NULL;
    this->Mesh03Material02SMRC = NULL;
    this->Mesh04WidthSMRC = 0.00f;
    this->Mesh04Material01SMRC = NULL;
    this->Mesh04Material02SMRC = NULL;
    this->EndMeshWidthSMRC = 0.00f;
    this->EndMeshMaterial01SMRC = NULL;
    this->EndMeshMaterial02SMRC = NULL;
    this->AngularDrivePositionStrengthConsRC = 512.00f;
    this->AngularDriveVelocityStrengthConsRC = 256.00f;
    this->SetAngularSwing1LimitConsRC = 45.00f;
    this->SetAngularSwing2LimitConsRC = 45.00f;
    this->SetAngularTwistLimitConsRC = 45.00f;
}

void URopePhy::SplineUpDir(USplineComponent* ITargetSpline, const float ISplineUpDirClamp) {
}

void URopePhy::SphereCollisionConfig(bool ShouldBlock, bool SimPhysics, USphereComponent* SphereCollisionIn, float AngularDampeningSCCIn, float LinearDampeningSCCIn, float PositionSolverSCCIn, float VelocitySolverSCCIn, float StabilizationThresholdMultiplierSCCIn, float SleepThresholdMultiplierSCCIn, float InertiaTensorScaleSCCIn, float CollUnitScaleSCCIn, float Mass, float MassScale) {
}

void URopePhy::SetUserSplineStartLocation_RC(USplineComponent* UserSpline, FVector LocationUserSplineStart, bool UseRelativeLocationUserSplineStart) {
}

void URopePhy::SetUserSplineEndLocation_RC(USplineComponent* UserSpline, FVector LocationUserSplineEnd, bool UseRelativeLocationUserSplineEnd) {
}

void URopePhy::SetSplMLocTang(USplineComponent* ITargetSpline, USplineMeshComponent* InTargetSplM, const int32 IEditPoint, const float UnitLengthSSMLTIn) {
}

void URopePhy::RuntimeUpdate_RC() {
}

void URopePhy::PhyConstrConfig(UPhysicsConstraintComponent* PhyConstrIn, float SetAngularSwing1LimitPCCIn, float SetAngularSwing2LimitPCCIn, float SetAngularTwistLimitPCCIn, float PositionStrengthPCCIn, float VelocityStrengthPCCIn) {
}

void URopePhy::OnTimerEnd() {
}

TArray<USplineMeshComponent*> URopePhy::Mesh_RC(UStaticMesh* StartMesh, float StartMeshWidth, UMaterialInterface* StartMeshMat01, UMaterialInterface* StartMeshMat02, UStaticMesh* Mesh01, float Mesh01Width, UMaterialInterface* Mesh01Mat01, UMaterialInterface* Mesh01Mat02, UStaticMesh* Mesh02, float Mesh02Width, UMaterialInterface* Mesh02Mat01, UMaterialInterface* Mesh02Mat02, UStaticMesh* Mesh03, float Mesh03Width, UMaterialInterface* Mesh03Mat01, UMaterialInterface* Mesh03Mat02, UStaticMesh* Mesh04, float Mesh04Width, UMaterialInterface* Mesh04Mat01, UMaterialInterface* Mesh04Mat02, UStaticMesh* EndMesh, float EndMeshWidth, UMaterialInterface* EndMeshMat01, UMaterialInterface* EndMeshMat02) {
    return TArray<USplineMeshComponent*>();
}

void URopePhy::MakePhysConstr(UPhysicsConstraintComponent* PhyConstrMPCIn, UWorld* WorldRefMPCIn, const FVector WorldLocationMPCIn, USphereComponent* CollRefAttachMPCIn) {
}

USplineComponent* URopePhy::GetSpline_RC() {
    return NULL;
}

USphereComponent* URopePhy::GetLastCollisionObject_RC() {
    return NULL;
}

USphereComponent* URopePhy::GetFirstCollisionObject_RC() {
    return NULL;
}

TArray<USphereComponent*> URopePhy::GetCollisionArray_RC() {
    return TArray<USphereComponent*>();
}

void URopePhy::Destroy_RC() {
}

FName URopePhy::CreateUniqueName(const FString& ComponentType, const int32 ComponentNumber, const FString& ThisComponentStrNameCUNIn) {
    return NAME_None;
}

void URopePhy::CreateSplineMeshes(USplineMeshComponent* SplineMeshCSMInput, UWorld* WorldRefCSMIn, USplineComponent* SplineOwnerRefCSMIn) {
}

void URopePhy::CreateSpline(USplineComponent* InSplineCS, const FVector WorldLocationCS, const FRotator WorldRotationCS, UWorld* WorldRefCSIn, USceneComponent* SelfRefCSIn) {
}

TArray<UPhysicsConstraintComponent*> URopePhy::Constraint_RC(const int32 AngularDrivePositionStrength, const int32 AngularDriveVelocityStrength, const int32 SetAngularSwing1Limit, const int32 SetAngularSwing2Limit, const int32 SetAngularTwistLimit) {
    return TArray<UPhysicsConstraintComponent*>();
}

void URopePhy::ConfigureSplineMeshes(USplineMeshComponent* SplineMeshConfigSMInput, UStaticMesh* MeshTypeConfigSMInput, float MeshWidthConfigSMInput, UMaterialInterface* MeshMaterial01ConfigSMInput, UMaterialInterface* MeshMaterial02ConfigSMInput) {
}

TArray<USphereComponent*> URopePhy::Collision_RC(float CollisionScale, float AngularDampening, float LinearDampening, float VelocitySolverIterationCount, float PositionSolverIterationCount, float StabilizationThresholdMultiplier, float SleepThresholdMultiplier, float InertiaTensorScale, float Mass, float MassScale) {
    return TArray<USphereComponent*>();
}

TArray<USphereComponent*> URopePhy::Build_RC(UStaticMesh* Mesh, UStaticMesh* StartEndMesh, float CollisionScale, USplineComponent* UserSpline, float UnitLength, FVector RopeOffset, bool DisableRopeOffset) {
    return TArray<USphereComponent*>();
}

void URopePhy::AdjustRenderSplineLocation(USplineComponent* RenderSpline, USplineComponent* UserSpline, UPrimitiveComponent* AttachedPrimitive, const int32 NumberOfLoops, const FName SocketName) {
}

void URopePhy::AddPointsToSpline(USplineComponent* SplineToGrow, USplineComponent* UserSplineCRSIn, const int32 NumberOfLoopsAPTSIn, const float UnitLengthAPTSIn, const FVector RopeOffsetAPTSIn) {
}


