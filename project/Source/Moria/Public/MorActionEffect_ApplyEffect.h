#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "Templates/SubclassOf.h"
#include "MorActionEffect_ApplyEffect.generated.h"

class UAbilitySystemComponent;
class UGameplayEffect;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_ApplyEffect : public UFGKActionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
    UMorActionEffect_ApplyEffect();

};

