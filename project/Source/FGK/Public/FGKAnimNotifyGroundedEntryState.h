#pragma once
#include "CoreMinimal.h"
#include "EFGKGroundedEntryState.h"
#include "FGKAnimNotify.h"
#include "FGKAnimNotifyGroundedEntryState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyGroundedEntryState : public UFGKAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKGroundedEntryState GroundedEntryState;
    
    UFGKAnimNotifyGroundedEntryState();

};

