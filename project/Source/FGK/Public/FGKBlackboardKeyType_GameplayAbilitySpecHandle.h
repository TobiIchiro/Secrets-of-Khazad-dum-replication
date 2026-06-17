#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "FGKBlackboardKeyType_GameplayAbilitySpecHandle.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKBlackboardKeyType_GameplayAbilitySpecHandle : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UFGKBlackboardKeyType_GameplayAbilitySpecHandle();

};

