#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EMoriaTeam.h"
#include "MorEnvQueryTest_BreakableTeam.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_BreakableTeam : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> AttitudeFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseQuerierTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoriaTeam TestTeam;
    
public:
    UMorEnvQueryTest_BreakableTeam();

};

