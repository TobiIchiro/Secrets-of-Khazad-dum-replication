#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "MorEnvQueryTest_IsSinging.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_IsSinging : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowHumming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckJoinability;
    
public:
    UMorEnvQueryTest_IsSinging();

};

