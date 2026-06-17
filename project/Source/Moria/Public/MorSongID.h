#pragma once
#include "CoreMinimal.h"
#include "MorSongID.generated.h"

USTRUCT(BlueprintType)
struct FMorSongID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UniqueId;
    
    MORIA_API FMorSongID();
};

