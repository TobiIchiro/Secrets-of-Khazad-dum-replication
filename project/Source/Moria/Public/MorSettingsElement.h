#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "MorSettingsElement.generated.h"

class UMorOptionHandler;
class UMorSettingsElementDataHandlerBase;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorSettingsElement : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OptionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AdditionalOptionIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* OptionNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorSettingsElementDataHandlerBase> DataHandlerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorSettingsElementDataHandlerBase* DataHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvalidElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bElementEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorOptionHandler* OptionHandler;
    
public:
    UMorSettingsElement();

    UFUNCTION(BlueprintCallable)
    void ShowElement();
    
    UFUNCTION(BlueprintCallable)
    void SetOptionToDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetElementEnable(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWidgetRebuilt();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvalid() const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidateElement(bool bInvalid);
    
    UFUNCTION(BlueprintCallable)
    void HideElement();
    
    UFUNCTION(BlueprintCallable)
    void ForceReinit();
    
    UFUNCTION(BlueprintCallable)
    void ElementChanged();
    
    UFUNCTION(BlueprintCallable)
    void ChangeIntValue(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInvalidate(bool bInvalid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInitialization();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEnabled(bool bEnabled);
    
};

