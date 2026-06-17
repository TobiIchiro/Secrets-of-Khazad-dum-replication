#pragma once
#include "CoreMinimal.h"
#include "ECraftFailureReason.h"
#include "FGKAIConditionBase.h"
#include "GameplayTagContainer.h"
#include "ENpcCraftType.h"
#include "MorAICondition_CanCraft.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_CanCraft : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInventoryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcCraftType CraftType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StationBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECraftFailureReason> IgnorableFailures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredRecipeResultItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FailReasonBlackboardKey;
    
public:
    UMorAICondition_CanCraft();

};

