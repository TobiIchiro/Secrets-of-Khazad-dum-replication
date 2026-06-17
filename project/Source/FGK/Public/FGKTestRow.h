#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKTestRow.generated.h"

class UFGKAnimChooserCondition;

UCLASS(Blueprintable)
class FGK_API UFGKTestRow : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFGKAnimChooserCondition*> ConditionArray;
    
    UFGKTestRow();

};

