#pragma once
#include "CoreMinimal.h"
#include "MorMediaSaveData.generated.h"

USTRUCT(BlueprintType)
struct FMorMediaSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MediaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayed;
    
    MORIA_API FMorMediaSaveData();
};

