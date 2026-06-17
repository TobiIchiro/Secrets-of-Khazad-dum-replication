#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FGKCharacterState.h"
#include "FGKCharacterState_FaceCamera.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCharacterState_FaceCamera : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlacklistTags;
    
public:
    UFGKCharacterState_FaceCamera();

};

