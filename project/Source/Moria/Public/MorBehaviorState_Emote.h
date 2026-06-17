#pragma once
#include "CoreMinimal.h"
#include "EMAIEmoteType.h"
#include "MorBehaviorState_Ability.h"
#include "MorBehaviorState_Emote.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Emote : public UMorBehaviorState_Ability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMAIEmoteType EmoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FacingTargetBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchTargetRotation;
    
public:
    UMorBehaviorState_Emote();

};

