#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "EMorWatcherTriggerType.h"
#include "MorAICondition_Watcher_WithinLevelTrigger.generated.h"

class UMorAIWatcherComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_Watcher_WithinLevelTrigger : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorWatcherTriggerType TriggerTypeToCheck;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorAIWatcherComponent* WatcherComponent;
    
public:
    UMorAICondition_Watcher_WithinLevelTrigger();

};

