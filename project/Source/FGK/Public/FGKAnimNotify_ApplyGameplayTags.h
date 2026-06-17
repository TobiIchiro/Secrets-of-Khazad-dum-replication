#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "FGKAnimNotify_ApplyGameplayTags.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FGK_API UFGKAnimNotify_ApplyGameplayTags : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAdd: 1;
    
public:
    UFGKAnimNotify_ApplyGameplayTags();

};

