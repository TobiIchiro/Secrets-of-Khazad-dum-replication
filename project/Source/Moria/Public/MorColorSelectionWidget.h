#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "MorCharacterCustomizationRowWidget.h"
#include "Templates/SubclassOf.h"
#include "MorColorSelectionWidget.generated.h"

class UButton;
class UDataTable;
class UMorColorSelectionRowButton;
class UUniformGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorColorSelectionWidget : public UMorCharacterCustomizationRowWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnColorSelectedBlueprint, const FDataTableRowHandle&, ColorRowHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnColorSelectedBlueprint OnColorSelectedBlueprint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxColumns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ColorOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorColorSelectionRowButton> ColorSelectionRowButtonClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* ColorBox;
    
public:
    UMorColorSelectionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UButton* GetFirstColorSelectionButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FLinearColor GetColorFromRowHandle(const FDataTableRowHandle& ColorRowHandle);
    
};

