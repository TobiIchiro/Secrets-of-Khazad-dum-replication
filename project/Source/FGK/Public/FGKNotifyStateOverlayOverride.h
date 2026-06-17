#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotifyState.h"
#include "FGKNotifyStateOverlayOverride.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKNotifyStateOverlayOverride : public UFGKAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverlayOverrideState;
    
    UFGKNotifyStateOverlayOverride();

};

