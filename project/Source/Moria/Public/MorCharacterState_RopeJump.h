#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "MorCharacterState_RopeJump.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_RopeJump : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpZVelocity;
    
public:
    UMorCharacterState_RopeJump();

};

