#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "FGKEnvQueryTest_TeamAttitude.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFGKEnvQueryTest_TeamAttitude : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> TeamAttitude;
    
public:
    UFGKEnvQueryTest_TeamAttitude();

};

