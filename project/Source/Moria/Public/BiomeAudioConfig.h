#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BiomeAudioConfig.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class MORIA_API UBiomeAudioConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> AmbientMusicLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> AmbientOneShotCues;
    
    UBiomeAudioConfig();

};

