#pragma once
#include "CoreMinimal.h"
#include "FGKInventoryItemFragment.h"
#include "FGKItemFragment_Cost.generated.h"

class UFGKActionCost;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKItemFragment_Cost : public UFGKInventoryItemFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFGKActionCost*> Cost;
    
    UFGKItemFragment_Cost();

};

