#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_IsRunning.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_IsRunning : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLeeway;
    
public:
    UFGKCondition_IsRunning();

};

