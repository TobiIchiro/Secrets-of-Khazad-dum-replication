#pragma once
#include "CoreMinimal.h"
#include "MorSongJukeboxResult.generated.h"

class UMorSongCategoryDefinition;

USTRUCT(BlueprintType)
struct FMorSongJukeboxResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorSongCategoryDefinition* CategoryDef;
    
    MORIA_API FMorSongJukeboxResult();
};

