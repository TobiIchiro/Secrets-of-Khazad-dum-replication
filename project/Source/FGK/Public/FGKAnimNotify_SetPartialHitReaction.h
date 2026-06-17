#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFGKPartialHitReactionSlot.h"
#include "FGKAnimNotify_SetPartialHitReaction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FGK_API UFGKAnimNotify_SetPartialHitReaction : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKPartialHitReactionSlot Slot;
    
public:
    UFGKAnimNotify_SetPartialHitReaction();

};

