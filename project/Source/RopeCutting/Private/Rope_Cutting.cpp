#include "Rope_Cutting.h"

URope_Cutting::URope_Cutting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartMeshTypeDARC = NULL;
    this->Mesh01TypeDARC = NULL;
    this->Mesh02TypeDARC = NULL;
    this->Mesh03TypeDARC = NULL;
    this->Mesh04TypeDARC = NULL;
    this->EndMeshTypeDARC = NULL;
    this->EmitterDefaultTypeDARC = NULL;
    this->SoundDefaultTypeDARC = NULL;
    this->StartPrimitiveASRC = NULL;
    this->EndPrimitiveAERC = NULL;
    this->SplineMeshPRC = NULL;
    this->EmitterPRC = NULL;
    this->SoundPRC = NULL;
    this->SphereCollPRC = NULL;
    this->PhysicsConstraintPRC = NULL;
    this->DataTracker = NULL;
    this->SplinePRC = NULL;
    this->UserSplinePRC = NULL;
    this->SplineBuildPRC = NULL;
    this->ReceivingTrackerCVRC = NULL;
    this->DonatingTrackerCVRC = NULL;
    this->ReceivingSplineCVRC = NULL;
    this->DonatingsplineCVRC = NULL;
    this->HitPhysicsConstraintCVRC = NULL;
    this->ReceivingCollisionRC = NULL;
    this->ReplacementCollisionRC = NULL;
    this->InverseRuntimeUpdateRateRTRC = 0.01f;
    this->PositionNumberRTRC = 0;
    this->NextPositionNumberRTRC = 0;
    this->IsLastOfLengthRTRC = false;
    this->StartAttachAngularSwing1LimitASRC = 45.00f;
    this->StartAttachAngularSwing2LimitASRC = 45.00f;
    this->StartAttachAngularTwistLimitASRC = 45.00f;
    this->StartAttachPositionStrengthASRC = 256.00f;
    this->StartAttachVelocityStrengthASRC = 512.00f;
    this->StartAttachLoopCountASRC = 0;
    this->StartAttachedASRC = false;
    this->FirstCollImmobileSRC = false;
    this->EndAttachAngularSwing1LimitAERC = 45.00f;
    this->EndAttachAngularSwing2LimitAERC = 45.00f;
    this->EndAttachAngularTwistLimitAERC = 45.00f;
    this->EndAttachPositionStrengthAERC = 256.00f;
    this->EndAttachVelocityStrengthAERC = 512.00f;
    this->IsEndImmobileAERC = false;
    this->EndAttachedAERC = false;
    this->LastCollImmobileAERC = false;
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
    this->AngularDrivePositionStrengthConsRC = 512.00f;
    this->AngularDriveVelocityStrengthConsRC = 256.00f;
    this->SetAngularSwing1LimitConsRC = 45.00f;
    this->SetAngularSwing2LimitConsRC = 45.00f;
    this->SetAngularTwistLimitConsRC = 45.00f;
    this->AllowCutMessageCVRC = true;
    this->BeginCutCVRC = false;
    this->CutInProgressCVRC = false;
    this->CutCounterCVRC = 0;
    this->InstanceSpecificIDStrBRC = TEXT("Default__Rope_Cutting");
    this->InstanceSpecificIDTagBRC = TEXT("Default__Rope_Cutting");
    this->UnitLengthBVRC = 15.00f;
    this->UserSplineSetToSocketLocBRC = false;
    this->BlockCuttingBRC = false;
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
    this->BeginGrowGRC = false;
    this->GrowLoopCountGRC = 0;
    this->GrowMeshSelectCountGRC = 3;
    this->BeginShrinkSRC = false;
    this->FirstSplineSRC = NULL;
    this->UsedInGameEG = true;
}

void URope_Cutting::UpdateSplOrCut() {
}

void URope_Cutting::TransferSplineMeshes(USplineMeshComponent* SplMeshArrayTSMIn, USplineComponent* TargetSplineTSMIn, const float UnitLengthTSMIn, const int32 IEditPoint) {
}

void URope_Cutting::TransferSphereCollision(USphereComponent* SphereCollisionArrayTSCIn, USplineComponent* TargetSplineTSCIn, const int32 EditPoint) {
}

void URope_Cutting::SplineUpDir(USplineComponent* ITargetSpline, const float ISplineUpDirClamp) {
}

void URope_Cutting::SphereCollisionConfig(bool ShouldBlock, bool SimPhysics, USphereComponent* SphereCollisionIn, float AngularDampeningSCCIn, float LinearDampeningSCCIn, float PositionSolverSCCIn, float VelocitySolverSCCIn, float StabilizationThresholdMultiplierSCCIn, float SleepThresholdMultiplierSCCIn, float InertiaTensorScaleSCCIn, float CollUnitScaleSCCIn, const FName GeneralName, FName SpecificInstanceNameCSCIn, float Mass, float MassScale) {
}

void URope_Cutting::ShrinkRopeImplement() {
}

bool URope_Cutting::ShrinkRope_RC(UPrimitiveComponent* ShrinkLocation) {
    return false;
}

void URope_Cutting::SetUserSplineStartLocation_RC(USplineComponent* UserSpline, FVector Location) {
}

void URope_Cutting::SetUserSplineEndLocation_RC(USplineComponent* UserSpline, FVector Location) {
}

void URope_Cutting::SetSplMLocTang(USplineComponent* ITargetSpline, USplineMeshComponent* InTargetSplM, const int32 IEditPoint, const float UnitLengthSSMLTIn) {
}

void URope_Cutting::RuntimeUpdate() {
}

void URope_Cutting::ResetCutLoop() {
}

void URope_Cutting::PhyConstrConfig(UPhysicsConstraintComponent* PhyConstrIn, float SetAngularSwing1LimitPCCIn, float SetAngularSwing2LimitPCCIn, float SetAngularTwistLimitPCCIn, float PositionStrengthPCCIn, float VelocityStrengthPCCIn) {
}

void URope_Cutting::OnTimerEnd() {
}

void URope_Cutting::onCutResTimer() {
}

void URope_Cutting::Mobilise_Start_RC() {
}

void URope_Cutting::Mobilise_End_RC() {
}

void URope_Cutting::MessageComponentToBeginCut_RC(UPrimitiveComponent* HitComponent) {
}

TArray<USplineMeshComponent*> URope_Cutting::Mesh_RC(UStaticMesh* StartMesh, float StartMeshWidth, UMaterialInterface* StartMeshMat01, UMaterialInterface* StartMeshMat02, UStaticMesh* Mesh01, float Mesh01Width, UMaterialInterface* Mesh01Mat01, UMaterialInterface* Mesh01Mat02, UStaticMesh* Mesh02, float Mesh02Width, UMaterialInterface* Mesh02Mat01, UMaterialInterface* Mesh02Mat02, UStaticMesh* Mesh03, float Mesh03Width, UMaterialInterface* Mesh03Mat01, UMaterialInterface* Mesh03Mat02, UStaticMesh* Mesh04, float Mesh04Width, UMaterialInterface* Mesh04Mat01, UMaterialInterface* Mesh04Mat02, UStaticMesh* EndMesh, float EndMeshWidth, UMaterialInterface* EndMeshMat01, UMaterialInterface* EndMeshMat02) {
    return TArray<USplineMeshComponent*>();
}

void URope_Cutting::MakePhysConstr(UPhysicsConstraintComponent* PhyConstrMPCIn, UWorld* WorldRefMPCIn, const FVector WorldLocationMPCIn, USphereComponent* CollRefAttachMPCIn) {
}

void URope_Cutting::Immobilise_Start_RC(bool StopTilt) {
}

void URope_Cutting::Immobilise_End_RC(bool StopTilt) {
}

void URope_Cutting::GrowRopeImplement() {
}

void URope_Cutting::GrowRope_RC(UPrimitiveComponent* GrowLocation) {
}

FVector URope_Cutting::GetShrinkTargetLocation_RC(FVector Location, bool Add, bool XAxis, bool YAxis, bool ZAxis, USphereComponent*& SecondCollisionSphere) {
    return FVector{};
}

FName URope_Cutting::GetRopeCollisionObjectName_RC(USphereComponent* RopeCollisionSphere) {
    return NAME_None;
}

TArray<URCTracker*> URope_Cutting::GetOrderedTrackerArray(USplineComponent* LookupSpline) {
    return TArray<URCTracker*>();
}

USphereComponent* URope_Cutting::GetLastCollisionObject_RC() {
    return NULL;
}

FVector URope_Cutting::GetGrowTargetLocation_RC(FVector Location, bool Add, bool XAxis, bool YAxis, bool ZAxis, USphereComponent*& FirstCollisionSphere) {
    return FVector{};
}

USphereComponent* URope_Cutting::GetFirstCollisionObject_RC() {
    return NULL;
}

TArray<USphereComponent*> URope_Cutting::GetCollisionArray_RC() {
    return TArray<USphereComponent*>();
}

USplineComponent* URope_Cutting::Get_Spline_RC() {
    return NULL;
}

TArray<USplineMeshComponent*> URope_Cutting::Get_Cut_Spline_Mesh_Array(UPrimitiveComponent* CollisionObjectForLookUp) {
    return TArray<USplineMeshComponent*>();
}

USplineComponent* URope_Cutting::Get_Cut_Spline(UPrimitiveComponent* CollisionObjectForLookUp) {
    return NULL;
}

void URope_Cutting::Get_Cut_Rope_Data_RC(UPrimitiveComponent* CollisionObjectForLookUp, int32& Position, FVector& Location, TArray<USphereComponent*>& CollisionArray, UPrimitiveComponent*& PreviousCollisionSphere, UPrimitiveComponent*& NextCollisionSphere, UPhysicsConstraintComponent*& Constraint, TArray<UPhysicsConstraintComponent*>& ConstraintArray, USplineMeshComponent*& SplineMesh, TArray<USplineMeshComponent*>& SplineMeshArray, USplineComponent*& Spline) {
}

TArray<UPhysicsConstraintComponent*> URope_Cutting::Get_Cut_Constraint_Array(UPrimitiveComponent* CollisionObjectForLookUp) {
    return TArray<UPhysicsConstraintComponent*>();
}

TArray<USphereComponent*> URope_Cutting::Get_Cut_Collision_Array(UPrimitiveComponent* CollisionObjectForLookUp) {
    return TArray<USphereComponent*>();
}

int32 URope_Cutting::Get_Collision_Sphere_Position(UPrimitiveComponent* CollisionObjectForLookUp) {
    return 0;
}

TArray<UPhysicsConstraintComponent*> URope_Cutting::Get_Attached_Start_Constraints_RC() {
    return TArray<UPhysicsConstraintComponent*>();
}

TArray<UPhysicsConstraintComponent*> URope_Cutting::Get_Attached_End_Constraints_RC() {
    return TArray<UPhysicsConstraintComponent*>();
}

void URope_Cutting::Effect_RC(UParticleSystem* Emitter, USoundCue* Sound) {
}

void URope_Cutting::Detach_Start_RC() {
}

void URope_Cutting::Detach_End_RC() {
}

void URope_Cutting::Destroy_RC() {
}

void URope_Cutting::CutRope() {
}

FName URope_Cutting::CreateUniqueName(const FString& ComponentType, const int32 ComponentNumber, const FString& ThisComponentStrNameCUNIn) {
    return NAME_None;
}

void URope_Cutting::CreateSplineMeshes(USplineMeshComponent* SplineMeshCSMInput, UWorld* WorldRefCSMIn, USplineComponent* SplineOwnerRefCSMIn) {
}

void URope_Cutting::CreateSpline(USplineComponent* InSplineCS, const FVector WorldLocationCS, const FRotator WorldRotationCS, UWorld* WorldRefCSIn, USceneComponent* SelfRefCSIn) {
}

void URope_Cutting::CreateSphereCollision(USphereComponent* SphereCollisionCSCIn, UWorld* WorldRefCSCIn, USplineComponent* SplineRefCSCIn) {
}

TArray<UPhysicsConstraintComponent*> URope_Cutting::Constraint_RC(const int32 AngularDrivePositionStrength, const int32 AngularDriveVelocityStrength, const int32 SetAngularSwing1Limit, const int32 SetAngularSwing2Limit, const int32 SetAngularTwistLimit) {
    return TArray<UPhysicsConstraintComponent*>();
}

void URope_Cutting::ConfigureSplineMeshes(USplineMeshComponent* SplineMeshConfigSMInput, UStaticMesh* MeshTypeConfigSMInput, float MeshWidthConfigSMInput, UMaterialInterface* MeshMaterial01ConfigSMInput, UMaterialInterface* MeshMaterial02ConfigSMInput) {
}

TArray<USphereComponent*> URope_Cutting::Collision_RC(float CollisionScale, float AngularDampening, float LinearDampening, float VelocitySolverIterationCount, float PositionSolverIterationCount, float StabilizationThresholdMultiplier, float SleepThresholdMultiplier, float InertiaTensorScale, float Mass, float MassScale) {
    return TArray<USphereComponent*>();
}

TArray<USphereComponent*> URope_Cutting::Build_RC(USplineComponent* UserSpline, UStaticMesh* Mesh, UStaticMesh* StartEndMesh, float UnitLength, FVector RopeOffset, bool DisableRopeOffset, float RuntimeUpdateRate, bool BlockCutting) {
    return TArray<USphereComponent*>();
}

TArray<UPhysicsConstraintComponent*> URope_Cutting::Attach_Start_RC(UPrimitiveComponent* StartPrimitive, const FName StartSocket, const FName StartBone, bool FurtherConstrain, bool IsImmobile, const float AngularSwing1Limit, const float AngularSwing2Limit, const float AngularTwistLimit, const float PositionStrength, const float VelocityStrength) {
    return TArray<UPhysicsConstraintComponent*>();
}

TArray<UPhysicsConstraintComponent*> URope_Cutting::Attach_End_RC(UPrimitiveComponent* EndPrimitive, const FName EndSocket, const FName EndBone, bool FurtherConstrain, bool IsImmobile, const float AngularSwing1Limit, const float AngularSwing2Limit, const float AngularTwistLimit, const float PositionStrength, const float VelocityStrength) {
    return TArray<UPhysicsConstraintComponent*>();
}

void URope_Cutting::AdjustRenderSplineLocation(USplineComponent* RenderSpline, USplineComponent* UserSpline, UPrimitiveComponent* AttachedPrimitive, const int32 NumberOfLoops, const FName SocketName) {
}

void URope_Cutting::AddPointsToSpline(USplineComponent* SplineToGrow, USplineComponent* UserSplineCRSIn, const int32 NumberOfLoopsAPTSIn, const float UnitLengthAPTSIn, const FVector RopeOffsetAPTSIn) {
}

void URope_Cutting::AddPointsToBuildingSpline(USplineComponent* SplineToGrow, const int32 NumberOfLoopsAPTSIn, const float UnitLengthAPTSIn) {
}


