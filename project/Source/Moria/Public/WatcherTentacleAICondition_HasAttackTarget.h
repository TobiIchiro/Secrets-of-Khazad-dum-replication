#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WatcherAICondition.h"
#include "WatcherTentacleAICondition_HasAttackTarget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherTentacleAICondition_HasAttackTarget : public UWatcherAICondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RequiredTargetType;
    
    UWatcherTentacleAICondition_HasAttackTarget();

};

