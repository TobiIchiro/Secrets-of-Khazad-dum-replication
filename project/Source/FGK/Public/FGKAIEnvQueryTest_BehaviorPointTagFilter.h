#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "FGKAIEnvQueryTest_BehaviorPointTagFilter.generated.h"

UCLASS(Blueprintable)
class FGK_API UFGKAIEnvQueryTest_BehaviorPointTagFilter : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TestTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireAny;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireExact;
    
public:
    UFGKAIEnvQueryTest_BehaviorPointTagFilter();

};

