#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FGKRunTimeState.h"
#include "FGKRunTimeStateArray.generated.h"

USTRUCT(BlueprintType)
struct FFGKRunTimeStateArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKRunTimeState> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bChanged;
    
    FGK_API FFGKRunTimeStateArray();
};

