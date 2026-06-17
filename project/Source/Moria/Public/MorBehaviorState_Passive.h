#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "FGKBehaviorState.h"
#include "MorBehaviorState_Passive.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Passive : public UFGKBehaviorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* AttractiveBehaviorPointsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIRequestID EQSRequestID;
    
public:
    UMorBehaviorState_Passive();

};

