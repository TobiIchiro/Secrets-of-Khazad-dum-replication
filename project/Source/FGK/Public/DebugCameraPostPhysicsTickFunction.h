#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "DebugCameraPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FDebugCameraPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FGK_API FDebugCameraPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FDebugCameraPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FDebugCameraPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

