#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "FGKAIEnvQueryContext_AllPlayers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAIEnvQueryContext_AllPlayers : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UFGKAIEnvQueryContext_AllPlayers();

};

