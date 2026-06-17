#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "BroadphaseOperation.h"
#include "BroadphaseRegionTickFunction.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBroadphaseRegionTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBroadphaseOperation> QueuedOperations;
    
    MORIA_API FBroadphaseRegionTickFunction();
};

template<>
struct TStructOpsTypeTraits<FBroadphaseRegionTickFunction> : public TStructOpsTypeTraitsBase2<FBroadphaseRegionTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

