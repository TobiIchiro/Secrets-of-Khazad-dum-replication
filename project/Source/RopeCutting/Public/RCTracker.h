#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCTracker.generated.h"

class UPhysicsConstraintComponent;
class USphereComponent;
class USplineComponent;
class USplineMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROPECUTTING_API URCTracker : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* RCT_SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RCT_PositionNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RCT_PrimaryCollisionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RCT_SecondaryCollisionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* RCT_SplineMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RCT_PrimarySphereColl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RCT_SecondarySphereColl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* RCT_PhysicsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstOfCutLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLastOfCutLength;
    
public:
    URCTracker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSplineMesh(USplineMeshComponent* SplineMeshIn);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineComponent(USplineComponent* SplineComponentIn);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondarySphereCollisionName(FName SecondarySphereCollisionNameIn);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondarySphereCollision(USphereComponent* SecondarySphereCollisionIn);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimarySphereCollisionName(FName PrimarySphereCollisionNameIn);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimarySphereCollision(USphereComponent* PrimarySphereCollisionIn);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionNumber(int32 PositionNumberIn);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsConstraint(UPhysicsConstraintComponent* PrimaryPhysicsConstraintIn);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLastOfCutLength(bool IsLastOfCutLengthIn);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFirstOfCutLength(bool IsFirstOfCutLengthIn);
    
    UFUNCTION(BlueprintCallable)
    USplineMeshComponent* GetSplineMesh();
    
    UFUNCTION(BlueprintCallable)
    USplineComponent* GetSplineComponent();
    
    UFUNCTION(BlueprintCallable)
    FName GetSecondarySphereCollisionName();
    
    UFUNCTION(BlueprintCallable)
    USphereComponent* GetSecondarySphereCollision();
    
    UFUNCTION(BlueprintCallable)
    FName GetPrimarySphereCollisionName();
    
    UFUNCTION(BlueprintCallable)
    USphereComponent* GetPrimarySphereCollision();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPositionNumber();
    
    UFUNCTION(BlueprintCallable)
    UPhysicsConstraintComponent* GetPhysicsConstraint();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLastOfCutLength();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFirstOfCutLength();
    
};

