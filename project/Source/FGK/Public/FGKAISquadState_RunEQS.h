#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadState.h"
#include "FGKAISquadState_RunEQS.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAISquadState_RunEQS : public UFGKAISquadState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
public:
    UFGKAISquadState_RunEQS();

};

