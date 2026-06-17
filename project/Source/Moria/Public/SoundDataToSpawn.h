#pragma once
#include "CoreMinimal.h"
#include "SoundDataToSpawn.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSoundDataToSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Sound;
    
    MORIA_API FSoundDataToSpawn();
};

