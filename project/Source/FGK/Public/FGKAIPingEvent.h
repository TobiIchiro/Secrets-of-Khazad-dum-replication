#pragma once
#include "CoreMinimal.h"
#include "EFGKAIAwarenessLevel.h"
#include "FGKAIPingEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGK_API FFGKAIPingEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PingReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKAIAwarenessLevel PingAwarenessLevel;
    
    FFGKAIPingEvent();
};

