#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FGKAnimNotifyState_RejectAllCombatRequests.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyState_RejectAllCombatRequests : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UFGKAnimNotifyState_RejectAllCombatRequests();

};

