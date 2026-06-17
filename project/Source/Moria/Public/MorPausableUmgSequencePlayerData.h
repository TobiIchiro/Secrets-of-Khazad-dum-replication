#pragma once
#include "CoreMinimal.h"
#include "MorPausableUmgSequencePlayerData.generated.h"

class UUMGSequencePlayer;

USTRUCT(BlueprintType)
struct FMorPausableUmgSequencePlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUMGSequencePlayer* Player;
    
    MORIA_API FMorPausableUmgSequencePlayerData();
};

