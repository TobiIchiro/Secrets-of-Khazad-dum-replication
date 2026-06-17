#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FGKAnimNotifyState.h"
#include "FGKAnimNotifyState_ApplyTags.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyState_ApplyTags : public UFGKAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
public:
    UFGKAnimNotifyState_ApplyTags();

};

