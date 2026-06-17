#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorProxyIndex.h"
#include "MorBreakableLevelInstance.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBreakableLevelInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProxyIndex ProxyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    FMorBreakableLevelInstance();
};

