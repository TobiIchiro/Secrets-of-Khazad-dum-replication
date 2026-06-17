#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "FGKWidgetDistanceVisibilityTickFunction.generated.h"

class UFGKWidgetDistanceVisibilitySubsystem;

USTRUCT(BlueprintType)
struct FGKUITOOLKIT_API FFGKWidgetDistanceVisibilityTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKWidgetDistanceVisibilitySubsystem* Parent;
    
    FFGKWidgetDistanceVisibilityTickFunction();
};

template<>
struct TStructOpsTypeTraits<FFGKWidgetDistanceVisibilityTickFunction> : public TStructOpsTypeTraitsBase2<FFGKWidgetDistanceVisibilityTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

