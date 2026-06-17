#pragma once
#include "CoreMinimal.h"
#include "MorItemDefinition.h"
#include "MorLoreRowHandle.h"
#include "MorTradeGoodDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTradeGoodDefinition : public FMorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorLoreRowHandle Lore;
    
    FMorTradeGoodDefinition();
};

