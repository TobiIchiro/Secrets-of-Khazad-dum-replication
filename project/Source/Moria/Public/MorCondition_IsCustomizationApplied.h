#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorCondition_IsCustomizationApplied.generated.h"

class UCustomizationManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCondition_IsCustomizationApplied : public UFGKCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomizationManager* CustomizationManager;
    
public:
    UMorCondition_IsCustomizationApplied();

};

