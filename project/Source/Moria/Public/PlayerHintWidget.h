#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "EUnableSleepState.h"
#include "MorAnyItemRowHandle.h"
#include "MorConstructionDefinition.h"
#include "MorConstructionRecipeDefinition.h"
#include "MorItemDefinition.h"
#include "MorItemRecipeDefinition.h"
#include "MorRuneDefinition.h"
#include "PlayerHintWidget.generated.h"

class AActor;
class AMorCharacter;
class AMorPlayerListManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UPlayerHintWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerListManager* PlayerListManager;
    
public:
    UPlayerHintWidget();

private:
    UFUNCTION(BlueprintCallable)
    void ZoomieStartedEvent(FText BubbleName);
    
    UFUNCTION(BlueprintCallable)
    void ZoomieFinishedEvent(AActor* PlayerCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowNavigation(const FText& NavigationText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLocation(const FText& LocationText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHint(const FText& HintText, float Duration, const FGameplayTag& Tag);
    
private:
    UFUNCTION(BlueprintCallable)
    void RuneRecipePartialProgressChangedEvent(const FMorRuneDefinition& RuneRecipe, const int32 NewProgress, const int32 OldProgress);
    
    UFUNCTION(BlueprintCallable)
    void RuneRecipeLearnedEvent(const FMorRuneDefinition& RuneRecipe);
    
    UFUNCTION(BlueprintCallable)
    void PlayerGoToBedEvent(bool IsInBed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoomieStarted(const FText& BubbleName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoomieFinished(const AMorCharacter* TeleportedCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRuneRecipePartialProgressChanged(const FMorRuneDefinition& RuneRecipe, const int32 NewProgress, const int32 OldProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRuneRecipeLearned(const FMorRuneDefinition& Recipe);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLeft(const FString& PlayerName, const FString& CharacterName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerJoined(const FString& PlayerName, const FString& CharacterName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerGoToBed(bool IsInBed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemRecipePartialProgressChanged(const FMorItemRecipeDefinition& ItemRecipe, const FMorItemDefinition& Result, const int32 NewProgress, const int32 OldProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemRecipeLearned(const FMorItemRecipeDefinition& Recipe, const FMorItemDefinition& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDiscovered(const FMorItemDefinition& ItemDef, const TArray<FText>& HintLines);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructionRecipePartialProgressChanged(const FMorConstructionRecipeDefinition& ConstructionRecipe, const FMorConstructionDefinition& Result, const int32 NewProgress, const int32 OldProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructionRecipeLearned(const FMorConstructionRecipeDefinition& Recipe, const FMorConstructionDefinition& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructionDiscovered(const FMorConstructionDefinition& ConstructionDef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCannotSleep(EUnableSleepState State);
    
private:
    UFUNCTION(BlueprintCallable)
    void ItemRecipePartialProgressChangedEvent(const FMorItemRecipeDefinition& ItemRecipe, const int32 NewProgress, const int32 OldProgress);
    
    UFUNCTION(BlueprintCallable)
    void ItemRecipeLearnedEvent(const FMorItemRecipeDefinition& ItemRecipe);
    
    UFUNCTION(BlueprintCallable)
    void ItemDiscoveredEvent(const FMorAnyItemRowHandle& ItemHandle, AActor* Discoverer);
    
    UFUNCTION(BlueprintCallable)
    void HordeTriggered(const AMorCharacter* TriggeringCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ConstructionRecipePartialProgressChangedEvent(const FMorConstructionRecipeDefinition& ConstructionRecipe, const int32 NewProgress, const int32 OldProgress);
    
    UFUNCTION(BlueprintCallable)
    void ConstructionRecipeLearnedEvent(const FMorConstructionRecipeDefinition& ConstructionRecipe);
    
    UFUNCTION(BlueprintCallable)
    void ConstructionDiscoveredEvent(const FMorConstructionDefinition& ConstructionDef);
    
    UFUNCTION(BlueprintCallable)
    void CannotSleepEvent(EUnableSleepState State);
    
};

