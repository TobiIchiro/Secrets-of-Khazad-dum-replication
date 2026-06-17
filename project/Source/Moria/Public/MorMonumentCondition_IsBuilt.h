#pragma once
#include "CoreMinimal.h"
#include "MorInteractableConditionBase.h"
#include "MorMonumentCondition_IsBuilt.generated.h"

class AMorMonument;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMonumentCondition_IsBuilt : public UMorInteractableConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorMonument* Monument;
    
public:
    UMorMonumentCondition_IsBuilt();

};

