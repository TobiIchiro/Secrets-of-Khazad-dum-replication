#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "WormEggCharacterState.generated.h"

class AWormEgg;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWormEggCharacterState : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWormEgg* Owner;
    
public:
    UWormEggCharacterState();

};

