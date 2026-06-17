#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKRescueFriendState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKRescueFriendState : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UFGKRescueFriendState();

};

