#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorCharacterState_BedMontageBase.h"
#include "MorCharacterState_NpcBedExit.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_NpcBedExit : public UMorCharacterState_BedMontageBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange ExitBedMontageStartTimeRange;
    
public:
    UMorCharacterState_NpcBedExit();

};

