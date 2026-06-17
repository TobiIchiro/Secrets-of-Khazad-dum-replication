#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorNPCConversationRowHandle.h"
#include "MorConversationData.generated.h"

USTRUCT(BlueprintType)
struct FMorConversationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 DelayUntilTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorNPCConversationRowHandle> Completed;
    
    MORIA_API FMorConversationData();
};

