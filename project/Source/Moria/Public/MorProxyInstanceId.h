#pragma once
#include "CoreMinimal.h"
#include "MorProxyInstanceId.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorProxyInstanceId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    FMorProxyInstanceId();
};

