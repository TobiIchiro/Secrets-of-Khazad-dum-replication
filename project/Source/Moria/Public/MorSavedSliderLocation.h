#pragma once
#include "CoreMinimal.h"
#include "MorDifficultySliderRowHandle.h"
#include "MorSavedSliderLocation.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSavedSliderLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorDifficultySliderRowHandle DifficultySliderRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SliderLocation;
    
    FMorSavedSliderLocation();
};

