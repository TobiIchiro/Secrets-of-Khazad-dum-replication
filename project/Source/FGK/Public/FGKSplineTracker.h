#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESplineCompare.h"
#include "FGKSplineTracker.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class FGK_API AFGKSplineTracker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTrackLocalPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCompareToEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWorldUnits: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineCompare CompareType;
    
    AFGKSplineTracker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValueUpdate(float Value);
    
    UFUNCTION(BlueprintCallable)
    void EnableSplineTrackingByName(FName SplineName, bool bEnableTracking);
    
    UFUNCTION(BlueprintCallable)
    void EnableSplineTracking(USplineComponent* Spline, bool bEnableTracking);
    
};

