#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "MorSharedPlayerData.h"
#include "MorUIFocusWidgetInterface.h"
#include "MorWidgetNavigationBuilderHandle.h"
#include "MorCurrentPlayerListWidget.generated.h"

class AMorPlayerListManager;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCurrentPlayerListWidget : public UFGKUserWidget, public IMorUIFocusWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoNavigationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerListManager* PlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* FirstPlayerListNavWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnabledList: 1;
    
public:
    UMorCurrentPlayerListWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidgetNavigation(UWidget* Widget, FMorWidgetNavigationBuilderHandle BuilderHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetPlayerData(UWidget* Widget, const FMorSharedPlayerData& PlayerData, bool bIsFirst);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOfflineWidgetPlayerData(UWidget* Widget);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetListEnabled(bool bValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnNavigationUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnChangedEnabledState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWidget*> GetWidgetInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetFirstWidget() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* CreateNewPlayerWidget();
    

    // Fix for true pure virtual functions not being implemented
};

