#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "EFGKAIBehaviorPointPriority.h"
#include "FGKAIEnvQueryTest_BehaviorPointMulti.generated.h"

UCLASS(Blueprintable)
class FGK_API UFGKAIEnvQueryTest_BehaviorPointMulti : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKAIBehaviorPointPriority TestPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TestTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireAny;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireExact;
    
public:
    UFGKAIEnvQueryTest_BehaviorPointMulti();

};

