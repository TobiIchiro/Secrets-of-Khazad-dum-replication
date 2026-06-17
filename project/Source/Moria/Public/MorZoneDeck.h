#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorZoneDeckEntry.h"
#include "MorZoneDeck.generated.h"

USTRUCT(BlueprintType)
struct FMorZoneDeck : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorZoneDeckEntry> DeckEntries;
    
    MORIA_API FMorZoneDeck();
};

