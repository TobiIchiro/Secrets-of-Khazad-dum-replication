#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "DirtPlugSize.h"
#include "EDirtPlugInterfaceType.h"
#include "MorDirtPlugDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDirtPlugDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDirtPlugInterfaceType DirtPlugInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirtPlugSize DirtPlugSize;
    
    FMorDirtPlugDefinition();
};

