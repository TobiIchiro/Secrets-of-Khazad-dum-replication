#pragma once
#include "CoreMinimal.h"
#include "WormCharacterState.h"
#include "WormPlayAnimState.generated.h"

class UAnimSequenceBase;
class UWormAnimInstance;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormPlayAnimState : public UWormCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWormAnimInstance* WormAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimPlayRate;
    
public:
    UWormPlayAnimState();

};

