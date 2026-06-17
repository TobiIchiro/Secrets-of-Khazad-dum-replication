#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EFGKAIBehaviorPointPriority.h"
#include "FGKAIEnvQueryTest_BehaviorPointPriority.generated.h"

UCLASS(Blueprintable)
class FGK_API UFGKAIEnvQueryTest_BehaviorPointPriority : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKAIBehaviorPointPriority TestPriority;
    
public:
    UFGKAIEnvQueryTest_BehaviorPointPriority();

};

