#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorNPCConversationRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCConversationRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorNPCConversationRowHandle();
};

