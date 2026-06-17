#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorNPCConversationTextRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCConversationTextRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorNPCConversationTextRowHandle();
};

