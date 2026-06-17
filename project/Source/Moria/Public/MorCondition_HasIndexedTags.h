#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "GameplayTagContainer.h"
#include "MorCondition_HasIndexedTags.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCondition_HasIndexedTags : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TemplateTags;
    
public:
    UMorCondition_HasIndexedTags();

};

