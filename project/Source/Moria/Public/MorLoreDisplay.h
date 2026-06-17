#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MorLoreDefinition.h"
#include "MorLoreRowHandle.h"
#include "MorLoreDisplay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorLoreDisplay : public UUserWidget {
    GENERATED_BODY()
public:
    UMorLoreDisplay();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStoryFragmentReceived(const FMorLoreRowHandle& LoreRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnLandmarkWaypointDiscovered(const FMorLoreRowHandle& LoreRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StoryFragmentReceived(const FMorLoreDefinition& LoreDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_LandmarkWaypointDiscovered(const FMorLoreDefinition& LoreDefinition);
    
};

