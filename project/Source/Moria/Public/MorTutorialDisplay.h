#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "MorTutorialDefinition.h"
#include "MorTutorialRowHandle.h"
#include "MorTutorialDisplay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorTutorialDisplay : public UFGKUserWidget {
    GENERATED_BODY()
public:
    UMorTutorialDisplay();

protected:
    UFUNCTION(BlueprintCallable)
    void TutorialComplete(const FMorTutorialRowHandle& TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void ShowTutorialDisplay(const FMorTutorialRowHandle& TutorialRowHandle, bool IsNew);
    
public:
    UFUNCTION(BlueprintCallable)
    void Hide();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckOffTutorialListItem(const FMorTutorialRowHandle& TutorialRowHandle, const int32 TutorialItemIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TutorialComplete(const FMorTutorialRowHandle& TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowTutorialDisplay(const FMorTutorialDefinition& TutorialDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CheckOffTutorialListItem(const FMorTutorialDefinition& TutorialDefinition, const int32 TutorialItemIndex);
    
};

