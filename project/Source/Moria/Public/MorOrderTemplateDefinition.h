#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorAnyItemRowHandle.h"
#include "MorOrderTemplateDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorOrderTemplateDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAnyItemRowHandle ItemHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderMinLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderMaxLimit;
    
    FMorOrderTemplateDefinition();
};

