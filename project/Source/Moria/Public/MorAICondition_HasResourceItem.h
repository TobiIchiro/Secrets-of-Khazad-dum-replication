#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "GameplayTagContainer.h"
#include "EResourceTagSource.h"
#include "MorAICondition_HasResourceItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_HasResourceItem : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResourceTagSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
public:
    UMorAICondition_HasResourceItem();

};

