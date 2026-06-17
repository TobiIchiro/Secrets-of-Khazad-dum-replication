#pragma once
#include "CoreMinimal.h"
#include "FGKAIShoutEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGK_API FFGKAIShoutEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ShoutingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    FFGKAIShoutEvent();
};

