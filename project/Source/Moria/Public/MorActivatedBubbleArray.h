#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorActivatedBubble.h"
#include "MorActivatedBubbleArray.generated.h"

USTRUCT(BlueprintType)
struct FMorActivatedBubbleArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorActivatedBubble> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bChanged;
    
    MORIA_API FMorActivatedBubbleArray();
};

