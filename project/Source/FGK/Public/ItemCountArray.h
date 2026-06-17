#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ItemCount.h"
#include "ItemCountArray.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FItemCountArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemCount> List;
    
public:
    FItemCountArray();
};

