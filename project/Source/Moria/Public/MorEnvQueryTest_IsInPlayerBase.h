#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "MorEnvQueryTest_IsInPlayerBase.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_IsInPlayerBase : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyOnBaseContainingQuerier;
    
public:
    UMorEnvQueryTest_IsInPlayerBase();

};

