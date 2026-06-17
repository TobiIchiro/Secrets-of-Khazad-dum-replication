#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Blueprint/UserWidget.h"
#include "MorColorSelectionRowButton.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorColorSelectionRowButton : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnColorSelectedBlueprint, const FDataTableRowHandle&, ColorRowHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnColorSelectedBlueprint OnColorSelectedBlueprint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor SelectionColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SelectionRowHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* SelectionButton;
    
public:
    UMorColorSelectionRowButton();

    UFUNCTION(BlueprintCallable)
    void SetSelectionColor(const FLinearColor& InSelectionColor, const FDataTableRowHandle& InSelectionRowHandle);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnSelectionButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UButton* GetSelectionButton() const;
    
};

