#pragma once
#include "CoreMinimal.h"
#include "GameFramework/RootMotionSource.h"
#include "RootMotionSource_JumpLink.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FRootMotionSource_JumpLink : public FRootMotionSource {
    GENERATED_BODY()
public:
    FRootMotionSource_JumpLink();
};

