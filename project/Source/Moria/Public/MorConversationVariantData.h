#pragma once
#include "CoreMinimal.h"
#include "MorConversationVariantData.generated.h"

USTRUCT(BlueprintType)
struct FMorConversationVariantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> VariantIndexesUsed;
    
    MORIA_API FMorConversationVariantData();
};

