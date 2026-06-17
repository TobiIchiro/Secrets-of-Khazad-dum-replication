#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "BackstoryMapEntry.h"
#include "MorMerchantRowHandle.h"
#include "MorOrderTemplateRowHandle.h"
#include "MorTradeBackStoryDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTradeBackStoryDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOrderTemplateRowHandle OrderTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorMerchantRowHandle, FBackstoryMapEntry> BackStories;
    
    FMorTradeBackStoryDefinition();
};

