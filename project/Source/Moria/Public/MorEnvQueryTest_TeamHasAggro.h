#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EMoriaTeam.h"
#include "MorEnvQueryTest_TeamHasAggro.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_TeamHasAggro : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMoriaTeam> TeamFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMoriaTeam> AggroTargetTeams;
    
public:
    UMorEnvQueryTest_TeamHasAggro();

};

