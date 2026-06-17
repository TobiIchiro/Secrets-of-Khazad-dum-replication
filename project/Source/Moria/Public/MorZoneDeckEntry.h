#pragma once
#include "CoreMinimal.h"
#include "EZoneDeckAppearances.h"
#include "MorZoneDeckEntry.generated.h"

USTRUCT(BlueprintType)
struct FMorZoneDeckEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZoneDeckAppearances Appearances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZoneEntrance;
    
    MORIA_API FMorZoneDeckEntry();
};

