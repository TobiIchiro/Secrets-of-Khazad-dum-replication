#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "Templates/SubclassOf.h"
#include "FGKAIEnvQueryContext_AITarget.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFGKAIEnvQueryContext_AITarget : public UEnvQueryContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> TeamAttitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TargetProxyClass;
    
public:
    UFGKAIEnvQueryContext_AITarget();

};

