#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "WatcherAICondition.generated.h"

class AWatcherCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWatcherAICondition : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWatcherCharacter* Watcher;
    
public:
    UWatcherAICondition();

};

