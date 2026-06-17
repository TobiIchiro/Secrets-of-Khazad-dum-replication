#pragma once
#include "CoreMinimal.h"
#include "EMorVoiceVariationType.h"
#include "LipSyncData.h"
#include "MorVoiceTimingData.h"
#include "SubtitleData.h"
#include "MorVoiceLine.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FMorVoiceLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> KhuzdulSpeakingVoiceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLipSyncData LipSyncData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubtitleData SubtitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorVoiceTimingData TimingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorVoiceVariationType VOType;
    
    MORIA_API FMorVoiceLine();
};

