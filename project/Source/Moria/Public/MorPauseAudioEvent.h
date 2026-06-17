#pragma once
#include "CoreMinimal.h"
#include "EMorPauseActivationState.h"
#include "MorPauseAudioEvent.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct MORIA_API FMorPauseAudioEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorPauseActivationState ActivationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Event;
    
    FMorPauseAudioEvent();
};

