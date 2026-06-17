#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "Templates/SubclassOf.h"
#include "FGKCondition_HasItem.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_HasItem : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeExactClass;
    
public:
    UFGKCondition_HasItem();

};

