#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MorLandmarkContainer.generated.h"

class ULandmark;

USTRUCT(BlueprintType)
struct MORIA_API FMorLandmarkContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, ULandmark*> Landmarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, ULandmark*> LandmarksByRow;
    
public:
    FMorLandmarkContainer();
};

