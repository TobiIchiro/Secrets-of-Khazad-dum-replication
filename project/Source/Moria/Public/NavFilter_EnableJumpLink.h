#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "NavFilter_EnableJumpLink.generated.h"

UCLASS(Blueprintable)
class MORIA_API UNavFilter_EnableJumpLink : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavFilter_EnableJumpLink();

};

