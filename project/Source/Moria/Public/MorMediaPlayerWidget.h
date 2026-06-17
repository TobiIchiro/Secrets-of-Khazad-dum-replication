#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "Blueprint/UserWidget.h"
#include "OnSkipButtonClickedDelegate.h"
#include "MorMediaPlayerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMediaPlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkipButtonClicked OnSkipButtonClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOffSkipTextTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSkippable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputChord> SkipButtons;
    
public:
    UMorMediaPlayerWidget();

    UFUNCTION(BlueprintCallable)
    void SetEnableInput(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupSubtitles(FName CinematicName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySubtitles();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMediaStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMediaPlayed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableInput(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnyKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSkipTextVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMediaPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMouseButtonDown();
    
};

