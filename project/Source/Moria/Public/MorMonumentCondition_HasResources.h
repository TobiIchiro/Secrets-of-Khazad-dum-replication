#pragma once
#include "CoreMinimal.h"
#include "MorInteractableConditionBase.h"
#include "MorMonumentCondition_HasResources.generated.h"

class AMorMonument;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMonumentCondition_HasResources : public UMorInteractableConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorMonument* Monument;
    
public:
    UMorMonumentCondition_HasResources();

};

