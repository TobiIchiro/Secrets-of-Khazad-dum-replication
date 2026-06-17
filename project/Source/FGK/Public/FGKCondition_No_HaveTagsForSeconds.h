#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "FGKCondition_HasTags.h"
#include "FGKCondition_No_HaveTagsForSeconds.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_No_HaveTagsForSeconds : public UFGKCondition_HasTags {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue CooldownTime;
    
public:
    UFGKCondition_No_HaveTagsForSeconds();

};

