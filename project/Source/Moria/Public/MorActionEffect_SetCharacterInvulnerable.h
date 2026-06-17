#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "MorActionEffect_SetCharacterInvulnerable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_SetCharacterInvulnerable : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvulnerabilityDuration;
    
public:
    UMorActionEffect_SetCharacterInvulnerable();

};

