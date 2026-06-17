#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "FGKActionEffect_ForceFeedback.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKActionEffect_ForceFeedback : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* FeedbackEffect;
    
public:
    UFGKActionEffect_ForceFeedback();

};

