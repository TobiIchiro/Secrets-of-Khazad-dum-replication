#pragma once
#include "CoreMinimal.h"
#include "MorProxyIndexList.generated.h"

USTRUCT(BlueprintType)
struct FMorProxyIndexList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IndexList;
    
    MORIA_API FMorProxyIndexList();
};

