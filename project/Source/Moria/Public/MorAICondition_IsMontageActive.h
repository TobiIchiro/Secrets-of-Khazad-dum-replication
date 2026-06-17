#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_IsMontageActive.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_IsMontageActive : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
public:
    UMorAICondition_IsMontageActive();

};

