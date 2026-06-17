#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFGKTagType.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_HasTags.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_HasTags : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKTagType TagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasAny: 1;
    
    UFGKCondition_HasTags();

};

