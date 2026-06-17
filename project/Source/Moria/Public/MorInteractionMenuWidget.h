#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "MorCachedInteractionWidgets.h"
#include "Templates/SubclassOf.h"
#include "MorInteractionMenuWidget.generated.h"

class AMorCharacter;
class IMorInteractableInterface;
class UMorInteractableInterface;
class UMorInteractComponent;
class UMorInteractionWidget;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractionMenuWidget : public UFGKUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* Interactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMorInteractableInterface> CurrentInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKUserWidget> DefaultInteractionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideIfNoInteractions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorInteractComponent* InteractComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFGKUserWidget>, FMorCachedInteractionWidgets> CachedWidgetsByClass;
    
public:
    UMorInteractionMenuWidget();

    UFUNCTION(BlueprintCallable)
    void ParentShown();
    
    UFUNCTION(BlueprintCallable)
    void ParentHidden();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetInteractable(const TScriptInterface<IMorInteractableInterface>& PreviousInteractable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable)
    void MovePrevious(bool bWrap);
    
    UFUNCTION(BlueprintCallable)
    void MoveNext(bool bWrap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPanelWidget* GetInteractionWidgetsContainer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorInteractionWidget* GetCurrentInteractionWidget() const;
    
};

