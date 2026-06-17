#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFGKGetTagResult.h"
#include "FGKGameplayTagsLibrary.generated.h"

UCLASS(Blueprintable)
class FGK_API UFGKGameplayTagsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFGKGameplayTagsLibrary();

    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetTagFromString(const FString& String, EFGKGetTagResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetTagFromName(const FName Name, EFGKGetTagResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetGameplayTagChildren(const FGameplayTag& GameplayTag, const bool bImmediateChildrenOnly);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetFirstTagWithParent(const FGameplayTagContainer& TagContainer, const FGameplayTag ParentTag, EFGKGetTagResult& OutResult);
    
};

