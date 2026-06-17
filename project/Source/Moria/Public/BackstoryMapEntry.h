#pragma once
#include "CoreMinimal.h"
#include "MorLoreRowHandle.h"
#include "BackstoryMapEntry.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FBackstoryMapEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorLoreRowHandle Lore;
    
    FBackstoryMapEntry();
};

