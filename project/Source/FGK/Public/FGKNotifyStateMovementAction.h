#pragma once
#include "CoreMinimal.h"
#include "EFGKMovementAction.h"
#include "FGKAnimNotifyState.h"
#include "FGKNotifyStateMovementAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKNotifyStateMovementAction : public UFGKAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKMovementAction MovementAction;
    
    UFGKNotifyStateMovementAction();

};

