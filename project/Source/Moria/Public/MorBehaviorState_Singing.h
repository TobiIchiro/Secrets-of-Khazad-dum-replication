#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "MorBehaviorState_Singing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Singing : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SingingDwarfBlackboardKeyName;
    
public:
    UMorBehaviorState_Singing();

};

