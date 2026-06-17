#pragma once
#include "CoreMinimal.h"
#include "FGKState.h"
#include "FGKEffectState.generated.h"

class UFGKActionCost;
class UFGKActionEffect;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKEffectState : public UFGKState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFGKActionCost*> Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFGKActionEffect*> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFinishIfCannotUpdateEffects: 1;
    
public:
    UFGKEffectState();

};

