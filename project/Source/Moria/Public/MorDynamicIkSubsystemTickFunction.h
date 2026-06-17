#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "MorDynamicIkSubsystemTickFunction.generated.h"

class UMorDynamicIkSubsystem;

USTRUCT(BlueprintType)
struct MORIA_API FMorDynamicIkSubsystemTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorDynamicIkSubsystem* Parent;
    
    FMorDynamicIkSubsystemTickFunction();
};

template<>
struct TStructOpsTypeTraits<FMorDynamicIkSubsystemTickFunction> : public TStructOpsTypeTraitsBase2<FMorDynamicIkSubsystemTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

