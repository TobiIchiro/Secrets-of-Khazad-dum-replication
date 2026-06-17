#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MorFreeCameraController.generated.h"

class AActor;
class AMorWaypoint;
class UMorFreeCameraHUD;
class UMoriaWidgetComponent;
class UPOIMarkerComponent;
class UPlayer;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AMorFreeCameraController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayer* OriginalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* OriginalControllerRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorFreeCameraHUD* FreeCameraHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> CollectedVisualComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> CollectedShadowComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMoriaWidgetComponent*> CollectedWidgetComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorWaypoint*> CollectedWaypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPOIMarkerComponent*> CollectedCallouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> AttachedActorComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> ChildrenComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDecel;
    
public:
    AMorFreeCameraController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterInputComponent();
    
    UFUNCTION(BlueprintCallable)
    void SetupInputComponent();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStepDOF(float stepDOF);
    
    UFUNCTION(BlueprintCallable)
    void SetRange(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPawnMovementSpeedScale(float NewSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMinFOV(float minFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetMinFocalDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDOF(float minDOF);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFOV(float maxFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFocalDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDOF(float maxDOF);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxAutoexitDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void SetDeadZone(float Zone);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerAsInput(bool bIsController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyExitFromFreeCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnyKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPauseBlocked() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateFreeCamera();
    
};

