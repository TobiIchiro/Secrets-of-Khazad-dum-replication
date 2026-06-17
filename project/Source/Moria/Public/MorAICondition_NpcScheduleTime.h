#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "ENpcSchedule.h"
#include "MorAICondition_NpcScheduleTime.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_NpcScheduleTime : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcSchedule ScheduledBehavior;
    
public:
    UMorAICondition_NpcScheduleTime();

};

