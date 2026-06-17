#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_DynamicBase.h"
#include "Templates/SubclassOf.h"
#include "MorBehaviorState_Role.generated.h"

class UFGKBehaviorState;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Role : public UFGKBehaviorState_DynamicBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKBehaviorState> DefaultBehavior;
    
public:
    UMorBehaviorState_Role();

};

