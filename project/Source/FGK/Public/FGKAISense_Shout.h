#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "FGKAIShoutEvent.h"
#include "FGKAISense_Shout.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Game)
class FGK_API UFGKAISense_Shout : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKAIShoutEvent> ShoutEvents;
    
public:
    UFGKAISense_Shout();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportShoutEvent(UObject* WorldContextObject, AActor* Instigator, AActor* ShoutingActor, float Range);
    
};

