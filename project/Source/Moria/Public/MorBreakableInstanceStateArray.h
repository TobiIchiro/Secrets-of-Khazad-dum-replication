#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorBreakableInstanceState.h"
#include "MorBreakableInstanceStateArray.generated.h"

class UMorBubbleBreakableInstanceHandler;

USTRUCT(BlueprintType)
struct MORIA_API FMorBreakableInstanceStateArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorBreakableInstanceState> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UMorBubbleBreakableInstanceHandler* ParentHandler;
    
    FMorBreakableInstanceStateArray();
};

