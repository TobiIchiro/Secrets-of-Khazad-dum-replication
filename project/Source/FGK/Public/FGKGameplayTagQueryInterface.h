#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "FGKGameplayTagQueryInterface.generated.h"

UINTERFACE(MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UFGKGameplayTagQueryInterface : public UGameplayTagAssetInterface {
    GENERATED_BODY()
};

class IFGKGameplayTagQueryInterface : public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void RemoveGameplayTags(const FGameplayTagContainer& TagContainer) PURE_VIRTUAL(RemoveGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveGameplayTag(const FGameplayTag& Tag) PURE_VIRTUAL(RemoveGameplayTag,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddGameplayTags(const FGameplayTagContainer& TagContainer) PURE_VIRTUAL(AddGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddGameplayTag(const FGameplayTag& Tag) PURE_VIRTUAL(AddGameplayTag,);
    
};

