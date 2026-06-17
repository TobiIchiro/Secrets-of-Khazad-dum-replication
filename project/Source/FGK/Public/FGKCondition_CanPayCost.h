#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_CanPayCost.generated.h"

class UFGKActionCost;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_CanPayCost : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFGKActionCost*> Cost;
    
    UFGKCondition_CanPayCost();

};

