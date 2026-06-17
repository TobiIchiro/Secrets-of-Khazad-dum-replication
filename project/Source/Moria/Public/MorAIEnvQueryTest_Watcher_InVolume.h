#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EMorWatcherTriggerType.h"
#include "MorAIEnvQueryTest_Watcher_InVolume.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorAIEnvQueryTest_Watcher_InVolume : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorWatcherTriggerType TriggerTypeToCheck;
    
public:
    UMorAIEnvQueryTest_Watcher_InVolume();

};

