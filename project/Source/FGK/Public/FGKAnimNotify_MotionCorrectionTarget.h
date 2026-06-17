#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FGKAnimNotify.h"
#include "FGKAnimNotify_MotionCorrectionTarget.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotify_MotionCorrectionTarget : public UFGKAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UFGKAnimNotify_MotionCorrectionTarget();

};

