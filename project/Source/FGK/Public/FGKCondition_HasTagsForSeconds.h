#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_HasTags.h"
#include "FGKCondition_HasTagsForSeconds.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_HasTagsForSeconds : public UFGKCondition_HasTags {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
public:
    UFGKCondition_HasTagsForSeconds();

};

