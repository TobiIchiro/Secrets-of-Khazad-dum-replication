#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKMotionCorrectionState.h"
#include "MorMontageState_ClimbDownToRope.generated.h"

class ARopeInteractable;
class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMontageState_ClimbDownToRope : public UFGKMotionCorrectionState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARopeInteractable* Rope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageThatWasPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform EdgeDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform AttachTransform;
    
public:
    UMorMontageState_ClimbDownToRope();

};

