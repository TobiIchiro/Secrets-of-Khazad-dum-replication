#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorProgressRowCondition.h"
#include "MorCondition_ProgressRow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCondition_ProgressRow : public UFGKCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorProgressRowCondition> ProgressRowConditions;
    
public:
    UMorCondition_ProgressRow();

};

