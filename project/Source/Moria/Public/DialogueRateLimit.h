#pragma once
#include "CoreMinimal.h"
#include "EMorDialogueEventCooldownLength.h"
#include "EMorRateLimitType.h"
#include "DialogueRateLimit.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FDialogueRateLimit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorRateLimitType RateLimitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTimesToPlayDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDialogueEventCooldownLength CooldownLength;
    
    FDialogueRateLimit();
};

