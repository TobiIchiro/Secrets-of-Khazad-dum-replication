#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "FGKEnvQueryContext_BlackboardKey.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKEnvQueryContext_BlackboardKey : public UEnvQueryContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
public:
    UFGKEnvQueryContext_BlackboardKey();

};

