#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorNPCTraitDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCTraitDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FMorNPCTraitDefinition();
};

