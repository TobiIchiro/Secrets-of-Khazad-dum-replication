#pragma once
#include "CoreMinimal.h"
#include "WormCharacterState.h"
#include "WormDie.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormDie : public UWormCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DieAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DigOutAndDieAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimPlayRate;
    
public:
    UWormDie();

};

