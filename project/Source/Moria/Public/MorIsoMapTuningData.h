#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MorIsoMapConfig.h"
#include "MorIsoMapTuningData.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorIsoMapTuningData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapConfig MapConfig;
    
    UMorIsoMapTuningData();

};

