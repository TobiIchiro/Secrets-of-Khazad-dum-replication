#pragma once
#include "CoreMinimal.h"
#include "FGKAggregatedDataTableBase.h"
#include "MorItemCachedData.h"
#include "MorAllItemsTable.generated.h"

class AMorItemBase;

UCLASS(Blueprintable)
class MORIA_API UMorAllItemsTable : public UFGKAggregatedDataTableBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AMorItemBase*, FMorItemCachedData> CachedItemData;
    
public:
    UMorAllItemsTable();

};

