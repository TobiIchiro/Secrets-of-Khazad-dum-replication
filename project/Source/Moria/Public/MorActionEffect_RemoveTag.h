#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "GameplayTagContainer.h"
#include "MorActionEffect_RemoveTag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_RemoveTag : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
public:
    UMorActionEffect_RemoveTag();

};

