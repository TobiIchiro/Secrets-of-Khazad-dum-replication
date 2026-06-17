#pragma once
#include "CoreMinimal.h"
#include "MorBubbleSplitData.h"
#include "MorVirtualWorldLayoutCatalog.generated.h"

class UMorBubbleDefinition;

USTRUCT(BlueprintType)
struct MORIA_API FMorVirtualWorldLayoutCatalog {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UMorBubbleDefinition*> BubbleNameToDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FMorBubbleSplitData> SplitBubbles;
    
public:
    FMorVirtualWorldLayoutCatalog();
};

