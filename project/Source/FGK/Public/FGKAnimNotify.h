#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "EFGKAnimNotify.h"
#include "FGKAnimNotify.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class FGK_API UFGKAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKAnimNotify NotifyType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlacklistTags;
    
public:
    UFGKAnimNotify();

    UFUNCTION(BlueprintCallable)
    UObject* GetSourceObject() const;
    
};

