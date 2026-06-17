#pragma once
#include "CoreMinimal.h"
#include "ItemCount.h"
#include "EjectItemsRequest.generated.h"

USTRUCT(BlueprintType)
struct FEjectItemsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FItemCount> Items;
    
    MORIA_API FEjectItemsRequest();
};

