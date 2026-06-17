#pragma once
#include "CoreMinimal.h"
#include "FGKUniqueNetId.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKUniqueNetId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 NetId;
    
public:
    FFGKUniqueNetId();
};

