#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "MorCondition_IsAbilityActive.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCondition_IsAbilityActive : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWithRootMotion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPlayTime;
    
public:
    UMorCondition_IsAbilityActive();

};

