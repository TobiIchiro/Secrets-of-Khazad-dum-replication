#pragma once
#include "CoreMinimal.h"
#include "FGKMotionCorrectionState.h"
#include "MorCharacterState_BedMontageBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_BedMontageBase : public UFGKMotionCorrectionState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStarted;
    
public:
    UMorCharacterState_BedMontageBase();

};

