#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "FGKAIDangerEvent.h"
#include "FGKAISenseEvent_Danger.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAISenseEvent_Danger : public UAISenseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKAIDangerEvent Event;
    
    UFGKAISenseEvent_Danger();

};

