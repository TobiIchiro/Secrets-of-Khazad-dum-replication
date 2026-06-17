#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "FGKActionEffect_SoundStimulus.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKActionEffect_SoundStimulus : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReportInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyTag;
    
public:
    UFGKActionEffect_SoundStimulus();

protected:
    UFUNCTION(BlueprintCallable)
    void ReportSound(AActor* Actor);
    
};

