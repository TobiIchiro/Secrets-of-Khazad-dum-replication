#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorAnyItemRowHandle.h"
#include "MorItemGroupDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorItemGroupDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorAnyItemRowHandle> Items;
    
    FMorItemGroupDefinition();
};

