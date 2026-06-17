#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotifyFootstepBase.h"
#include "FGKAnimNotifyUEFootstep.generated.h"

class USoundBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyUEFootstep : public UFGKAnimNotifyFootstepBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultSound;
    
    UFGKAnimNotifyUEFootstep();

};

