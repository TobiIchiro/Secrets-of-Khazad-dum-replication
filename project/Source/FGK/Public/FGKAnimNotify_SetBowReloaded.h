#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EBowArrowMode.h"
#include "FGKAnimNotify_SetBowReloaded.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FGK_API UFGKAnimNotify_SetBowReloaded : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBowArrowMode ArrowMode;
    
public:
    UFGKAnimNotify_SetBowReloaded();

};

