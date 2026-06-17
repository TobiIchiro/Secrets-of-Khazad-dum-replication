#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "FGKAIDangerEvent.h"
#include "FGKAISense_Danger.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class FGK_API UFGKAISense_Danger : public UAISense {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKAIDangerEvent> RegisteredEvents;
    
public:
    UFGKAISense_Danger();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportDangerEvent(UObject* WorldContextObject, FVector EventLocation, FVector Velocity, float Strength, AActor* Instigator, float MaxRange, FName Tag, float Age);
    
};

