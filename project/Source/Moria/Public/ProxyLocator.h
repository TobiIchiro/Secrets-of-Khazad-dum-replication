#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorProxyInstanceId.h"
#include "ProxyLocator.generated.h"

USTRUCT(BlueprintType)
struct FProxyLocator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Coord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProxyInstanceId InstanceId;
    
    MORIA_API FProxyLocator();
};
FORCEINLINE uint32 GetTypeHash(const FProxyLocator) { return 0; }

