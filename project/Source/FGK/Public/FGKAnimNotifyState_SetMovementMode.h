#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FGKAnimNotifyState.h"
#include "FGKAnimNotifyState_SetMovementMode.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyState_SetMovementMode : public UFGKAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MovementMode;
    
public:
    UFGKAnimNotifyState_SetMovementMode();

};

