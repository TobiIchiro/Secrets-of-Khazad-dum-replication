#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "FGKCondition_IsChildDone.generated.h"

class UFGKState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_IsChildDone : public UFGKCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* StateContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoneOnFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoneOnAbort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinueIfChildless;
    
public:
    UFGKCondition_IsChildDone();

};

