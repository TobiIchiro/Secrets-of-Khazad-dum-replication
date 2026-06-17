#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "EFGKProbeType.h"
#include "FGKCameraStateSettings.h"
#include "FGKPlayerCameraManager.generated.h"

class AActor;
class AFGKBaseCharacter;
class UFGKActorFSMComponent;
class UFGKCameraState;
class USceneCaptureComponent;

UCLASS(Blueprintable, NonTransient)
class FGK_API AFGKPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKCameraStateSettings Settings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraPullbackOverrideDampening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PullbackScaleOverrideDampening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKProbeType ProbeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProbeDisallowIntersect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridProbeBoxWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridProbeBoxDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridProbeConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridProbeHillInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridProbeSmoothingStrengthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridProbeSmoothingStrengthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* GridProbeInfluencingCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* ControlledCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* CameraFSMComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKCameraState* LastActiveLeaf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneCaptureComponent*> SceneCaptureComponents;
    
public:
    AFGKPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPossess(AFGKBaseCharacter* NewCharacter);
    
    UFUNCTION(BlueprintCallable)
    AFGKBaseCharacter* GetControlledCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    UFGKActorFSMComponent* GetCameraFSMComp() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachSceneCaptureComponent(USceneCaptureComponent* CaptureComponent);
    
    UFUNCTION(BlueprintCallable)
    void AttachSceneCaptureComponent(USceneCaptureComponent* CaptureComponent);
    
};

