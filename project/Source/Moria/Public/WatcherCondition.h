#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "WatcherCondition.generated.h"

class AWatcherCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWatcherCondition : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWatcherCharacter* Watcher;
    
public:
    UWatcherCondition();

};

