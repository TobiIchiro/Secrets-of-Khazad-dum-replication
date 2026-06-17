#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "Templates/SubclassOf.h"
#include "FGKConditon_CanHaveAnyItemOfType.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKConditon_CanHaveAnyItemOfType : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AInventoryItem>> ItemTypes;
    
public:
    UFGKConditon_CanHaveAnyItemOfType();

};

