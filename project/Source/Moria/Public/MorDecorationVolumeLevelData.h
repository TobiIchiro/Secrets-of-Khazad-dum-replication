#pragma once
#include "CoreMinimal.h"
#include "MorDecorationVolumeLevelActorData.h"
#include "MorDecorationVolumeLevelData.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDecorationVolumeLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDecorationVolumeLevelActorData> Volumes;
    
    FMorDecorationVolumeLevelData();
};

