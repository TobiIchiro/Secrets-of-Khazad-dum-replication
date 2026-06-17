#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "Templates/SubclassOf.h"
#include "FGKConditon_HasItemOfType.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKConditon_HasItemOfType : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredCount;
    
public:
    UFGKConditon_HasItemOfType();

};

