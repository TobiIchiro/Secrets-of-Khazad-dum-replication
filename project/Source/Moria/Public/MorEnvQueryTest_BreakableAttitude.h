#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "MorEnvQueryTest_BreakableBase.h"
#include "MorEnvQueryTest_BreakableAttitude.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_BreakableAttitude : public UMorEnvQueryTest_BreakableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> Filter;
    
public:
    UMorEnvQueryTest_BreakableAttitude();

};

