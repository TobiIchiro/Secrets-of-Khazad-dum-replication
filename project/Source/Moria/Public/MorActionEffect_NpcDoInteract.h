#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "GameplayTagContainer.h"
#include "MorActionEffect_NpcDoInteract.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_NpcDoInteract : public UFGKActionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagForOtherLinkedBehaviorPoint;
    
public:
    UMorActionEffect_NpcDoInteract();

};

