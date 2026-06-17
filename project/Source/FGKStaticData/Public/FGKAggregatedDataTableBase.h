#pragma once
#include "CoreMinimal.h"
#include "FGKDataTableBase.h"
#include "FGKAggregatedDataTableBase.generated.h"

UCLASS(Abstract, Blueprintable)
class FGKSTATICDATA_API UFGKAggregatedDataTableBase : public UFGKDataTableBase {
    GENERATED_BODY()
public:
    UFGKAggregatedDataTableBase();

};

