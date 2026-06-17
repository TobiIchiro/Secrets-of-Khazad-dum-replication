#pragma once
#include "CoreMinimal.h"
#include "EFGKTurnInPlaceType.h"
#include "FGKMontageState.h"
#include "FGKMontageState_TurnInPlace.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKMontageState_TurnInPlace : public UFGKMontageState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKTurnInPlaceType TurnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimPredictionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYawFromAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyConstrainYawWhileAiming;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint16 RootMotionSourceID;
    
public:
    UFGKMontageState_TurnInPlace();

};

