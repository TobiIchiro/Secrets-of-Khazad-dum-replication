#pragma once
#include "CoreMinimal.h"
#include "MorBuilderSlot.generated.h"

class UMorNPCComponent;

USTRUCT(BlueprintType)
struct MORIA_API FMorBuilderSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorNPCComponent* BuilderNPC;
    
    FMorBuilderSlot();
};

