#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_AllPlayersHaveTags.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_AllPlayersHaveTags : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasAny: 1;
    
public:
    UFGKCondition_AllPlayersHaveTags();

};

