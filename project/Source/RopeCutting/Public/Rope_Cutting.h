#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "Rope_Cutting.generated.h"

class UAudioComponent;
class UMaterialInterface;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicsConstraintComponent;
class UPrimitiveComponent;
class URCTracker;
class USoundCue;
class USphereComponent;
class USplineComponent;
class USplineMeshComponent;
class UStaticMesh;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROPECUTTING_API URope_Cutting : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StartMeshTypeDARC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh01TypeDARC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh02TypeDARC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh03TypeDARC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh04TypeDARC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* EndMeshTypeDARC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* EmitterDefaultTypeDARC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundDefaultTypeDARC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCTracker*> TrackerArrayARC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsConstraintComponent*> AttachedStartConstraintsARC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsConstraintComponent*> AttachedEndConstraintsARC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* StartPrimitiveASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* EndPrimitiveAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshPRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* EmitterPRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SoundPRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollPRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* PhysicsConstraintPRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTracker* DataTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplinePRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* UserSplinePRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineBuildPRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTracker* ReceivingTrackerCVRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTracker* DonatingTrackerCVRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* ReceivingSplineCVRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* DonatingsplineCVRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* HitPhysicsConstraintCVRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ReceivingCollisionRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ReplacementCollisionRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InverseRuntimeUpdateRateRTRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PositionNumberRTRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextPositionNumberRTRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLastOfLengthRTRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSocketASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartBoneASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAttachAngularSwing1LimitASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAttachAngularSwing2LimitASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAttachAngularTwistLimitASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAttachPositionStrengthASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAttachVelocityStrengthASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartAttachLoopCountASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartAttachedASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstCollImmobileSRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FirstCollImmobileRotationASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FirstCollImmobileLocationASRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndSocketAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndBoneAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndAttachAngularSwing1LimitAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndAttachAngularSwing2LimitAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndAttachAngularTwistLimitAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndAttachPositionStrengthAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndAttachVelocityStrengthAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndImmobileAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EndAttachedAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastCollImmobileAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LastCollImmobileRotationAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastCollImmobileLocationAERC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollUnitScaleCRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularDampeningCRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDampeningCRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocitySolverCRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionSolverCRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilizationThresholdMultiplierCRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SleepThresholdMultiplierCRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InertiaTensorScaleCRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GenericSharedTagCRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MassCRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MassScaleCRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularDrivePositionStrengthConsRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularDriveVelocityStrengthConsRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetAngularSwing1LimitConsRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetAngularSwing2LimitConsRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetAngularTwistLimitConsRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowCutMessageCVRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BeginCutCVRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CutInProgressCVRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CutCounterCVRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstanceSpecificIDStrBRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InstanceSpecificIDTagBRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitLengthBVRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UserSplineSetToSocketLocBRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BlockCuttingBRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasBuiltBRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartMeshWidthSMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StartMeshMaterial01SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StartMeshMaterial02SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mesh01WidthSMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Mesh01Material01SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Mesh01Material02SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mesh02WidthSMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Mesh02Material01SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Mesh02Material02SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mesh03WidthSMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Mesh03Material01SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Mesh03Material02SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mesh04WidthSMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Mesh04Material01SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Mesh04Material02SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndMeshWidthSMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EndMeshMaterial01SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EndMeshMaterial02SMRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BeginGrowGRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrowLoopCountGRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrowMeshSelectCountGRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GrowLocationGRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BeginShrinkSRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* FirstSplineSRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShrinkLocationSRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsedInGameEG;
    
public:
    URope_Cutting(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateSplOrCut();
    
    UFUNCTION(BlueprintCallable)
    static void TransferSplineMeshes(USplineMeshComponent* SplMeshArrayTSMIn, USplineComponent* TargetSplineTSMIn, const float UnitLengthTSMIn, const int32 IEditPoint);
    
    UFUNCTION(BlueprintCallable)
    static void TransferSphereCollision(USphereComponent* SphereCollisionArrayTSCIn, USplineComponent* TargetSplineTSCIn, const int32 EditPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SplineUpDir(USplineComponent* ITargetSpline, const float ISplineUpDirClamp);
    
    UFUNCTION(BlueprintCallable)
    static void SphereCollisionConfig(bool ShouldBlock, bool SimPhysics, USphereComponent* SphereCollisionIn, float AngularDampeningSCCIn, float LinearDampeningSCCIn, float PositionSolverSCCIn, float VelocitySolverSCCIn, float StabilizationThresholdMultiplierSCCIn, float SleepThresholdMultiplierSCCIn, float InertiaTensorScaleSCCIn, float CollUnitScaleSCCIn, const FName GeneralName, FName SpecificInstanceNameCSCIn, float Mass, float MassScale);
    
    UFUNCTION(BlueprintCallable)
    void ShrinkRopeImplement();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ShrinkRope_RC(UPrimitiveComponent* ShrinkLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetUserSplineStartLocation_RC(USplineComponent* UserSpline, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetUserSplineEndLocation_RC(USplineComponent* UserSpline, FVector Location);
    
private:
    UFUNCTION(BlueprintCallable)
    static void SetSplMLocTang(USplineComponent* ITargetSpline, USplineMeshComponent* InTargetSplM, const int32 IEditPoint, const float UnitLengthSSMLTIn);
    
    UFUNCTION(BlueprintCallable)
    void RuntimeUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ResetCutLoop();
    
    UFUNCTION(BlueprintCallable)
    static void PhyConstrConfig(UPhysicsConstraintComponent* PhyConstrIn, float SetAngularSwing1LimitPCCIn, float SetAngularSwing2LimitPCCIn, float SetAngularTwistLimitPCCIn, float PositionStrengthPCCIn, float VelocityStrengthPCCIn);
    
    UFUNCTION(BlueprintCallable)
    void OnTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void onCutResTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void Mobilise_Start_RC();
    
    UFUNCTION(BlueprintCallable)
    void Mobilise_End_RC();
    
    UFUNCTION(BlueprintCallable)
    void MessageComponentToBeginCut_RC(UPrimitiveComponent* HitComponent);
    
    UFUNCTION(BlueprintCallable)
    TArray<USplineMeshComponent*> Mesh_RC(UStaticMesh* StartMesh, float StartMeshWidth, UMaterialInterface* StartMeshMat01, UMaterialInterface* StartMeshMat02, UStaticMesh* Mesh01, float Mesh01Width, UMaterialInterface* Mesh01Mat01, UMaterialInterface* Mesh01Mat02, UStaticMesh* Mesh02, float Mesh02Width, UMaterialInterface* Mesh02Mat01, UMaterialInterface* Mesh02Mat02, UStaticMesh* Mesh03, float Mesh03Width, UMaterialInterface* Mesh03Mat01, UMaterialInterface* Mesh03Mat02, UStaticMesh* Mesh04, float Mesh04Width, UMaterialInterface* Mesh04Mat01, UMaterialInterface* Mesh04Mat02, UStaticMesh* EndMesh, float EndMeshWidth, UMaterialInterface* EndMeshMat01, UMaterialInterface* EndMeshMat02);
    
private:
    UFUNCTION(BlueprintCallable)
    static void MakePhysConstr(UPhysicsConstraintComponent* PhyConstrMPCIn, UWorld* WorldRefMPCIn, const FVector WorldLocationMPCIn, USphereComponent* CollRefAttachMPCIn);
    
public:
    UFUNCTION(BlueprintCallable)
    void Immobilise_Start_RC(bool StopTilt);
    
    UFUNCTION(BlueprintCallable)
    void Immobilise_End_RC(bool StopTilt);
    
private:
    UFUNCTION(BlueprintCallable)
    void GrowRopeImplement();
    
public:
    UFUNCTION(BlueprintCallable)
    void GrowRope_RC(UPrimitiveComponent* GrowLocation);
    
    UFUNCTION(BlueprintCallable)
    FVector GetShrinkTargetLocation_RC(FVector Location, bool Add, bool XAxis, bool YAxis, bool ZAxis, USphereComponent*& SecondCollisionSphere);
    
    UFUNCTION(BlueprintCallable)
    FName GetRopeCollisionObjectName_RC(USphereComponent* RopeCollisionSphere);
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<URCTracker*> GetOrderedTrackerArray(USplineComponent* LookupSpline);
    
public:
    UFUNCTION(BlueprintCallable)
    USphereComponent* GetLastCollisionObject_RC();
    
    UFUNCTION(BlueprintCallable)
    FVector GetGrowTargetLocation_RC(FVector Location, bool Add, bool XAxis, bool YAxis, bool ZAxis, USphereComponent*& FirstCollisionSphere);
    
    UFUNCTION(BlueprintCallable)
    USphereComponent* GetFirstCollisionObject_RC();
    
    UFUNCTION(BlueprintCallable)
    TArray<USphereComponent*> GetCollisionArray_RC();
    
    UFUNCTION(BlueprintCallable)
    USplineComponent* Get_Spline_RC();
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<USplineMeshComponent*> Get_Cut_Spline_Mesh_Array(UPrimitiveComponent* CollisionObjectForLookUp);
    
    UFUNCTION(BlueprintCallable)
    USplineComponent* Get_Cut_Spline(UPrimitiveComponent* CollisionObjectForLookUp);
    
public:
    UFUNCTION(BlueprintCallable)
    void Get_Cut_Rope_Data_RC(UPrimitiveComponent* CollisionObjectForLookUp, int32& Position, FVector& Location, TArray<USphereComponent*>& CollisionArray, UPrimitiveComponent*& PreviousCollisionSphere, UPrimitiveComponent*& NextCollisionSphere, UPhysicsConstraintComponent*& Constraint, TArray<UPhysicsConstraintComponent*>& ConstraintArray, USplineMeshComponent*& SplineMesh, TArray<USplineMeshComponent*>& SplineMeshArray, USplineComponent*& Spline);
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<UPhysicsConstraintComponent*> Get_Cut_Constraint_Array(UPrimitiveComponent* CollisionObjectForLookUp);
    
    UFUNCTION(BlueprintCallable)
    TArray<USphereComponent*> Get_Cut_Collision_Array(UPrimitiveComponent* CollisionObjectForLookUp);
    
    UFUNCTION(BlueprintCallable)
    int32 Get_Collision_Sphere_Position(UPrimitiveComponent* CollisionObjectForLookUp);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<UPhysicsConstraintComponent*> Get_Attached_Start_Constraints_RC();
    
    UFUNCTION(BlueprintCallable)
    TArray<UPhysicsConstraintComponent*> Get_Attached_End_Constraints_RC();
    
    UFUNCTION(BlueprintCallable)
    void Effect_RC(UParticleSystem* Emitter, USoundCue* Sound);
    
    UFUNCTION(BlueprintCallable)
    void Detach_Start_RC();
    
    UFUNCTION(BlueprintCallable)
    void Detach_End_RC();
    
    UFUNCTION(BlueprintCallable)
    void Destroy_RC();
    
private:
    UFUNCTION(BlueprintCallable)
    void CutRope();
    
    UFUNCTION(BlueprintCallable)
    static FName CreateUniqueName(const FString& ComponentType, const int32 ComponentNumber, const FString& ThisComponentStrNameCUNIn);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSplineMeshes(USplineMeshComponent* SplineMeshCSMInput, UWorld* WorldRefCSMIn, USplineComponent* SplineOwnerRefCSMIn);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSpline(USplineComponent* InSplineCS, const FVector WorldLocationCS, const FRotator WorldRotationCS, UWorld* WorldRefCSIn, USceneComponent* SelfRefCSIn);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSphereCollision(USphereComponent* SphereCollisionCSCIn, UWorld* WorldRefCSCIn, USplineComponent* SplineRefCSCIn);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<UPhysicsConstraintComponent*> Constraint_RC(const int32 AngularDrivePositionStrength, const int32 AngularDriveVelocityStrength, const int32 SetAngularSwing1Limit, const int32 SetAngularSwing2Limit, const int32 SetAngularTwistLimit);
    
private:
    UFUNCTION(BlueprintCallable)
    static void ConfigureSplineMeshes(USplineMeshComponent* SplineMeshConfigSMInput, UStaticMesh* MeshTypeConfigSMInput, float MeshWidthConfigSMInput, UMaterialInterface* MeshMaterial01ConfigSMInput, UMaterialInterface* MeshMaterial02ConfigSMInput);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<USphereComponent*> Collision_RC(float CollisionScale, float AngularDampening, float LinearDampening, float VelocitySolverIterationCount, float PositionSolverIterationCount, float StabilizationThresholdMultiplier, float SleepThresholdMultiplier, float InertiaTensorScale, float Mass, float MassScale);
    
    UFUNCTION(BlueprintCallable)
    TArray<USphereComponent*> Build_RC(USplineComponent* UserSpline, UStaticMesh* Mesh, UStaticMesh* StartEndMesh, float UnitLength, FVector RopeOffset, bool DisableRopeOffset, float RuntimeUpdateRate, bool BlockCutting);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPhysicsConstraintComponent*> Attach_Start_RC(UPrimitiveComponent* StartPrimitive, const FName StartSocket, const FName StartBone, bool FurtherConstrain, bool IsImmobile, const float AngularSwing1Limit, const float AngularSwing2Limit, const float AngularTwistLimit, const float PositionStrength, const float VelocityStrength);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPhysicsConstraintComponent*> Attach_End_RC(UPrimitiveComponent* EndPrimitive, const FName EndSocket, const FName EndBone, bool FurtherConstrain, bool IsImmobile, const float AngularSwing1Limit, const float AngularSwing2Limit, const float AngularTwistLimit, const float PositionStrength, const float VelocityStrength);
    
private:
    UFUNCTION(BlueprintCallable)
    static void AdjustRenderSplineLocation(USplineComponent* RenderSpline, USplineComponent* UserSpline, UPrimitiveComponent* AttachedPrimitive, const int32 NumberOfLoops, const FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    static void AddPointsToSpline(USplineComponent* SplineToGrow, USplineComponent* UserSplineCRSIn, const int32 NumberOfLoopsAPTSIn, const float UnitLengthAPTSIn, const FVector RopeOffsetAPTSIn);
    
    UFUNCTION(BlueprintCallable)
    static void AddPointsToBuildingSpline(USplineComponent* SplineToGrow, const int32 NumberOfLoopsAPTSIn, const float UnitLengthAPTSIn);
    
};

