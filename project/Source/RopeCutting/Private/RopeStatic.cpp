#include "RopeStatic.h"

URopeStatic::URopeStatic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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
    this->CollUnitScaleCRC = 0.20f;
    this->InstanceSpecificIDStrBRC = TEXT("Default__RopeStatic");
    this->InstanceSpecificIDTagBRC = TEXT("Default__RopeStatic");
    this->UnitLengthBVRC = 15.00f;
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
}

void URopeStatic::SplineUpDir(USplineComponent* ITargetSpline, const float ISplineUpDirClamp) {
}

void URopeStatic::SetUserSplineStartLocation_RC(USplineComponent* UserSpline, FVector Location, bool UseRelativeLocation) {
}

void URopeStatic::SetUserSplineEndLocation_RC(USplineComponent* UserSpline, FVector Location, bool UseRelativeLocation) {
}

void URopeStatic::SetSplMLocTang(USplineComponent* ITargetSpline, USplineMeshComponent* InTargetSplM, const int32 IEditPoint, const float UnitLengthSSMLTIn) {
}

TArray<USplineMeshComponent*> URopeStatic::Mesh_RC(UStaticMesh* StartMesh, float StartMeshWidth, UMaterialInterface* StartMeshMat01, UMaterialInterface* StartMeshMat02, UStaticMesh* Mesh01, float Mesh01Width, UMaterialInterface* Mesh01Mat01, UMaterialInterface* Mesh01Mat02, UStaticMesh* Mesh02, float Mesh02Width, UMaterialInterface* Mesh02Mat01, UMaterialInterface* Mesh02Mat02, UStaticMesh* Mesh03, float Mesh03Width, UMaterialInterface* Mesh03Mat01, UMaterialInterface* Mesh03Mat02, UStaticMesh* Mesh04, float Mesh04Width, UMaterialInterface* Mesh04Mat01, UMaterialInterface* Mesh04Mat02, UStaticMesh* EndMesh, float EndMeshWidth, UMaterialInterface* EndMeshMat01, UMaterialInterface* EndMeshMat02) {
    return TArray<USplineMeshComponent*>();
}

USphereComponent* URopeStatic::GetLastCollisionObject_RC() {
    return NULL;
}

USphereComponent* URopeStatic::GetFirstCollisionObject_RC() {
    return NULL;
}

TArray<USphereComponent*> URopeStatic::GetCollisionArray_RC() {
    return TArray<USphereComponent*>();
}

USplineComponent* URopeStatic::Get_Spline_RC() {
    return NULL;
}

void URopeStatic::Destroy_RC() {
}

FName URopeStatic::CreateUniqueName(const FString& ComponentType, const int32 ComponentNumber, const FString& ThisComponentStrNameCUNIn) {
    return NAME_None;
}

void URopeStatic::CreateSplineMeshes(USplineMeshComponent* SplineMeshCSMInput, UWorld* WorldRefCSMIn, USplineComponent* SplineOwnerRefCSMIn) {
}

void URopeStatic::CreateSpline(USplineComponent* InSplineCS, const FVector WorldLocationCS, const FRotator WorldRotationCS, UWorld* WorldRefCSIn, USceneComponent* SelfRefCSIn) {
}

void URopeStatic::ConfigureSplineMeshes(USplineMeshComponent* SplineMeshConfigSMInput, UStaticMesh* MeshTypeConfigSMInput, float MeshWidthConfigSMInput, UMaterialInterface* MeshMaterial01ConfigSMInput, UMaterialInterface* MeshMaterial02ConfigSMInput) {
}

TArray<USphereComponent*> URopeStatic::Build_RC(USplineComponent* UserSpline, UStaticMesh* Mesh, UStaticMesh* StartEndMesh, int32 CollisionScale, float UnitLength, FVector RopeOffset, bool DisableRopeOffset) {
    return TArray<USphereComponent*>();
}

void URopeStatic::AdjustRenderSplineLocation(USplineComponent* RenderSpline, USplineComponent* UserSpline, UPrimitiveComponent* AttachedPrimitive, const int32 NumberOfLoops, const FName SocketName) {
}

void URopeStatic::AddPointsToSpline(USplineComponent* SplineToGrow, USplineComponent* UserSplineCRSIn, const int32 NumberOfLoopsAPTSIn, const float UnitLengthAPTSIn, const FVector RopeOffsetAPTSIn) {
}


