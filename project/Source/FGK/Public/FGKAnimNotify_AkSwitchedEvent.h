#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotify.h"
#include "SoundSourceType.h"
#include "FGKAnimNotify_AkSwitchedEvent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class FGK_API UFGKAnimNotify_AkSwitchedEvent : public UFGKAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SoundSourceType SoundSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UFGKAnimNotify_AkSwitchedEvent();

};

