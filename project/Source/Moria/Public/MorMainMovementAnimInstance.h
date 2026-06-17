#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FGKAnimCharacterInformation.h"
#include "FGKAnimGraphGrounded.h"
#include "FGKAnimGraphInAir.h"
#include "FGKLeanAmount.h"
#include "FGKMovementState.h"
#include "FGKStance.h"
#include "MorMainMovementAnimInstanceProxy.h"
#include "MorMainMovementAnimInstance.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, NonTransient)
class MORIA_API UMorMainMovementAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* LandPredictionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* LeanInAirCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurveName_Mask_LandPrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKAnimCharacterInformation CharacterInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKLeanAmount LeanAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKStance Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKAnimGraphInAir InAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKAnimGraphGrounded Grounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorMainMovementAnimInstanceProxy Proxy;
    
public:
    UMorMainMovementAnimInstance();

};

