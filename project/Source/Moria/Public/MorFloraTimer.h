#pragma once
#include "CoreMinimal.h"
#include "MorFloraTimer.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorFloraTimer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentGameTimerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LastGameMinuteCheck;
    
public:
    FMorFloraTimer();
};

