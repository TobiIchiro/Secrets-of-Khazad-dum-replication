#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "MorEnvQueryTest_QuerierCanDeposit.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_QuerierCanDeposit : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FilterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckForSpaces;
    
    UMorEnvQueryTest_QuerierCanDeposit();

};

