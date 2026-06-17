#pragma once
#include "CoreMinimal.h"
#include "MusicBusLevelRTPCs.generated.h"

class UAkRtpc;

USTRUCT(BlueprintType)
struct MORIA_API FMusicBusLevelRTPCs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkRtpc*> RTPCs;
    
    FMusicBusLevelRTPCs();
};

