#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorProgressDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorProgressDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialSandboxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Note;
    
    FMorProgressDefinition();
};

