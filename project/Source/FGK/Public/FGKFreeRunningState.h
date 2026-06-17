#pragma once
#include "CoreMinimal.h"
#include "EFGKGait.h"
#include "FGKCharacterState.h"
#include "FGKFreeRunningState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKFreeRunningState : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFGKGait CachedGait;
    
public:
    UFGKFreeRunningState();

};

