#pragma once
#include "CoreMinimal.h"
#include "MorCharacterState_BedMontageBase.h"
#include "MorCharacterState_NpcBedSleep.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_NpcBedSleep : public UMorCharacterState_BedMontageBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipTargetRotation;
    
public:
    UMorCharacterState_NpcBedSleep();

};

