#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorTutorialState.h"
#include "MorTrackedTutorials.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTrackedTutorials : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorTutorialState> Tutorials;
    
public:
    FMorTrackedTutorials();
};

