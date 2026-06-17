#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorCondition_IsSleepingHudOpen.generated.h"

class ASleepManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCondition_IsSleepingHudOpen : public UFGKCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASleepManager* SleepManager;
    
public:
    UMorCondition_IsSleepingHudOpen();

};

