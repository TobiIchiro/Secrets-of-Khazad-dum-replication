#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadState.h"
#include "EMorAIHordeAwarenessEventType.h"
#include "MorAISquadState_ReportAwarenessEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAISquadState_ReportAwarenessEvent : public UFGKAISquadState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAIHordeAwarenessEventType AwarenessEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventTriggerKey;
    
public:
    UMorAISquadState_ReportAwarenessEvent();

};

