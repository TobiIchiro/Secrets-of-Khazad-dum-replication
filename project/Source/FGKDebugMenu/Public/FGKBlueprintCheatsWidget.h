#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FGKBlueprintCheatsWidget.generated.h"

class UButton;
class UFGKBlueprintCheatEntry;
class UFGKBlueprintCheatEntryWidget;
class UTreeView;

UCLASS(Blueprintable, EditInlineNew)
class FGKDEBUGMENU_API UFGKBlueprintCheatsWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTreeView* CheatsTreeView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* CollapseAllButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ExpandAllButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKBlueprintCheatEntry* CheatTree;
    
public:
    UFGKBlueprintCheatsWidget();

    UFUNCTION(BlueprintCallable)
    UFGKBlueprintCheatEntryWidget* GetFirstCheatEntryWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UButton* GetExpandAllButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UButton* GetCollapseAllButton() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ExpandTree();
    
    UFUNCTION(BlueprintCallable)
    void CollapseTree();
    
};

