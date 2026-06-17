#pragma once
#include "CoreMinimal.h"
#include "MorLoreDefinition.h"
#include "MorLoreScreenLoreEntriesList.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorLoreScreenLoreEntriesList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorLoreDefinition> LoreEntries;
    
    FMorLoreScreenLoreEntriesList();
};

