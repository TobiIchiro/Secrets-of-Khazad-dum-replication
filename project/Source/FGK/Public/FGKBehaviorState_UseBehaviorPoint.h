#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_DynamicBase.h"
#include "FGKBehaviorState_UseBehaviorPoint.generated.h"

class UFGKAIBehaviorPointComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_UseBehaviorPoint : public UFGKBehaviorState_DynamicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreChildAbort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKAIBehaviorPointComponent* CurrentBehaviorPointComponent;
    
public:
    UFGKBehaviorState_UseBehaviorPoint();

};

