#pragma once
#include "CoreMinimal.h"
#include "MorResourceRowHandle.h"
#include "ResourceInstance.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FResourceInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorResourceRowHandle ResourceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootPassCount;
    
    FResourceInstance();
};

