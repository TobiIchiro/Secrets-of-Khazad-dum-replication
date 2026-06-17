#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotifyFootstepBase.h"
#include "FGKAnimNotifyAkFootstep.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyAkFootstep : public UFGKAnimNotifyFootstepBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AkComponentName;
    
    UFGKAnimNotifyAkFootstep();

};

