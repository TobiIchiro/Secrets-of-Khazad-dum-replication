#pragma once
#include "CoreMinimal.h"
#include "HintEntry.generated.h"

USTRUCT(BlueprintType)
struct FHintEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Lines;
    
    MORIA_API FHintEntry();
};

