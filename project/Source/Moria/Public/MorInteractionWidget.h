#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "EInteractState.h"
#include "MorInteractionWidget.generated.h"

class AMorCharacter;
class IMorInteractableInterface;
class UMorInteractableInterface;
class UMorInteractComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractionWidget : public UFGKUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMorInteractableInterface> Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorCharacter* Interactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HoldDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractState InteractState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorInteractComponent* InteractComponent;
    
public:
    UMorInteractionWidget();

    UFUNCTION(BlueprintCallable)
    void SetIsSelected(const bool bSelected);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnpool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIsSelected(const bool bSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetInteraction(const FText& FormattedText, const bool bCanDoInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetHoldInteraction(const FText& FormattedText, const bool bCanDoInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPool();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnMovePrevious(bool bWrap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnMoveNext(bool bWrap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHoldInteraction() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteInteraction();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteHoldInteraction();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDoInteraction() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDoHoldInteraction() const;
    
};

