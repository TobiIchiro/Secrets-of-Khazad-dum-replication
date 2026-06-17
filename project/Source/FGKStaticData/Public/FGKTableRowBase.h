#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERowEnabledState.h"
#include "FGKTableRowBase.generated.h"

USTRUCT(BlueprintType)
struct FGKSTATICDATA_API FFGKTableRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERowEnabledState EnabledState;
    
    FFGKTableRowBase();
};

