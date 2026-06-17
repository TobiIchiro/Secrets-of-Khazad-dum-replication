#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "EMSongType.h"
#include "MorAICondition_CanHearSong.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_CanHearSong : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMSongType SongType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
public:
    UMorAICondition_CanHearSong();

};

