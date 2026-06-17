#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKCharacterState_FaceTowardsAim.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCharacterState_FaceTowardsAim : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYawFromAim;
    
public:
    UFGKCharacterState_FaceTowardsAim();

};

