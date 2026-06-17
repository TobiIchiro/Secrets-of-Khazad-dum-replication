#pragma once
#include "CoreMinimal.h"
#include "MorInputState_Base.h"
#include "MorInputState_ActionBar.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorInputState_ActionBar : public UMorInputState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionChangedTimeoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> HeldTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadialStepThreshold;
    
public:
    UMorInputState_ActionBar();

};

