#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState_FaceTowardsAim.h"
#include "MorCharacterState_SnapToAim.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_SnapToAim : public UFGKCharacterState_FaceTowardsAim {
    GENERATED_BODY()
public:
    UMorCharacterState_SnapToAim();

};

