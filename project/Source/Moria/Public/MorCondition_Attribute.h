#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "MorAttributeCheck.h"
#include "MorCondition_Attribute.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCondition_Attribute : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAttributeCheck Check;
    
public:
    UMorCondition_Attribute();

};

