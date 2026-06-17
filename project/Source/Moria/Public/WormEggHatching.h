#pragma once
#include "CoreMinimal.h"
#include "WormEggCharacterState.h"
#include "WormEggHatching.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormEggHatching : public UWormEggCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* HatchingAnim;
    
public:
    UWormEggHatching();

};

