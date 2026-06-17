#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorOrderTemplateRowHandle.h"
#include "MorOrderDeckDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorOrderDeckDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorOrderTemplateRowHandle> Orders;
    
    FMorOrderDeckDefinition();
};

