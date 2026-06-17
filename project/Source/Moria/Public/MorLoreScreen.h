#pragma once
#include "CoreMinimal.h"
#include "FGKUIScreen.h"
#include "GameplayTagContainer.h"
#include "MorCategoryTagDefinition.h"
#include "MorLoreDefinition.h"
#include "MorLoreRowHandle.h"
#include "MorLoreScreenLoreEntriesList.h"
#include "MorTipDefinition.h"
#include "MorTutorialDefinition.h"
#include "MorLoreScreen.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorLoreScreen : public UFGKUIScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RootCategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorLoreRowHandle> AllDiscoveredLoreEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorLoreRowHandle> AllLoreEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorCategoryTagDefinition> AllCategories;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMorCategoryTagDefinition, FMorLoreScreenLoreEntriesList> LoreEntriesByCategory;
    
public:
    UMorLoreScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void SetTutorialEntryViewed(const FMorTutorialDefinition& TutorialEntry);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialEntrySelected(const FMorTutorialDefinition& TutorialEntry);
    
    UFUNCTION(BlueprintCallable)
    void SetTipEntryViewed(const FMorTipDefinition& TipEntry);
    
    UFUNCTION(BlueprintCallable)
    void SetLoreEntryViewed(const FMorLoreDefinition& LoreEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialEntryViewed(const FMorTutorialDefinition& TutorialEntry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTipEntryViewed(const FMorTipDefinition& TipEntry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoreEntryViewed(const FMorLoreDefinition& LoreEntry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorLoreDefinition> GetLoreEntriesForCategory(const FMorCategoryTagDefinition& Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorCategoryTagDefinition> GetGroupByCategories() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventViewLoreEntry(FMorLoreDefinition LoreRef);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CategorizeLoreEntries(const FGameplayTag& FilterTag, const FGameplayTag& GroupByTag);
    
};

