#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotify.h"
#include "Templates/SubclassOf.h"
#include "FGKAnimNotifyCameraShake.generated.h"

class UCameraShakeBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyCameraShake : public UFGKAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> ShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UFGKAnimNotifyCameraShake();

};

