#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "MorCondition_StateHasTargetActor.generated.h"

class UFGKState;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCondition_StateHasTargetActor : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* ContextState;
    
public:
    UMorCondition_StateHasTargetActor();

};

