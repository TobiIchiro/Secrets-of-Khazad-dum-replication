#pragma once
#include "CoreMinimal.h"
#include "MorDialogueTimestampScoreBucket.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDialogueTimestampScoreBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLinePlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalScore;
    
    FMorDialogueTimestampScoreBucket();
};

