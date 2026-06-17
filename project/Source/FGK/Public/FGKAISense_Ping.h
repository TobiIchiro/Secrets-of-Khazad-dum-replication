#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "EFGKAIAwarenessLevel.h"
#include "FGKAIPingEvent.h"
#include "FGKAISense_Ping.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Game)
class FGK_API UFGKAISense_Ping : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKAIPingEvent> PingEvents;
    
public:
    UFGKAISense_Ping();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PingAwareness(UObject* WorldContextObject, AActor* PingReceiver, AActor* TargetActor, EFGKAIAwarenessLevel PingAwarenessLevel);
    
};

