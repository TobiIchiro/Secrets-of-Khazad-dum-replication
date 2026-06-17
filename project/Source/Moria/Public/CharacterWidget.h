#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMorMultiplayerNamesMode.h"
#include "CharacterWidget.generated.h"

class AActor;
class UCanvasPanel;
class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UCharacterWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* HealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* StaminaBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* StaminaText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CraftingPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CraftingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* CraftingBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* SingingPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* VoiceLinePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* SongPrimePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* SongPrimeBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CraftingWidgetText;
    
public:
    UCharacterWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugView();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayersNameModeChanged(EMorMultiplayerNamesMode NewMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaPerPip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaMaxPipCount() const;
    
};

