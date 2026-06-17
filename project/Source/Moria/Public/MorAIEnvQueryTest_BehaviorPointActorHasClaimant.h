#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "MorAIEnvQueryTest_BehaviorPointActorHasClaimant.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorAIEnvQueryTest_BehaviorPointActorHasClaimant : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue WantsMineValue;
    
public:
    UMorAIEnvQueryTest_BehaviorPointActorHasClaimant();

};

