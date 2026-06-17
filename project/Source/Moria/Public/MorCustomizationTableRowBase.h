#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERowEnabledState.h"
#include "MorCustomizationTableRowBase.generated.h"

USTRUCT(BlueprintType)
struct FMorCustomizationTableRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERowEnabledState EnabledState;
    
    MORIA_API FMorCustomizationTableRowBase();
};

