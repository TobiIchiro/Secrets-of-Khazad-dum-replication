#pragma once
#include "CoreMinimal.h"
#include "WormAICondition.h"
#include "WormAICondition_ShouldAttack.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormAICondition_ShouldAttack : public UWormAICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeleeAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRangeAttack;
    
public:
    UWormAICondition_ShouldAttack();

};

