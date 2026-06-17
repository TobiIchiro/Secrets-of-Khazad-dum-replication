#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorNPCConversationTextDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCConversationTextDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ConversationLines;
    
    FMorNPCConversationTextDefinition();
};

