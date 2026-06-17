#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorWorldLayoutState.generated.h"

class UWorldLayoutBubble;

USTRUCT(BlueprintType)
struct MORIA_API FMorWorldLayoutState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, UWorldLayoutBubble*> Bubbles;
    
    FMorWorldLayoutState();
};

