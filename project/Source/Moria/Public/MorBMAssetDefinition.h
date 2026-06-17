#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MorBMAssetDefinition.generated.h"

class UMorBackgroundMusicAsset;

USTRUCT(BlueprintType)
struct FMorBMAssetDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorBackgroundMusicAsset* BackgroundMusicAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverridePriority;
    
    MORIA_API FMorBMAssetDefinition();
};

