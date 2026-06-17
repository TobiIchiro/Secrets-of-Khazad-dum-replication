#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "MorActionEffect_EatMeal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_EatMeal : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName_MealBehaviorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysEatMeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyUpdateLastEatenTime;
    
public:
    UMorActionEffect_EatMeal();

};

