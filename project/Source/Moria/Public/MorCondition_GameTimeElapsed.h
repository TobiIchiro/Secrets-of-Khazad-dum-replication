#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorCondition_GameTimeElapsed.generated.h"

class UFGKState;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCondition_GameTimeElapsed : public UFGKCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* StateContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameMinutes;
    
public:
    UMorCondition_GameTimeElapsed();

};

