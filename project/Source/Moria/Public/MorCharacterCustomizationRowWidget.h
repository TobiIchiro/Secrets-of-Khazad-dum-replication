#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Blueprint/UserWidget.h"
#include "ECharacterCustomizationPropertyType.h"
#include "MorCharacterCustomizationRowWidget.generated.h"

class UDataTable;
class UMorCharacterCreatorWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterCustomizationRowWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRowSelectedBlueprint, const FDataTableRowHandle&, SelectedRowHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRowSelectedBlueprint OnRowSelectedBlueprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCustomizationProperty: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterCustomizationPropertyType CustomizationPropertyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorCharacterCreatorWidget* CharacterCreatorWidgetParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SelectedRowName;
    
public:
    UMorCharacterCustomizationRowWidget();

    UFUNCTION(BlueprintCallable)
    void SelectRowByOffset(int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void SelectRow(const FName& RowName);
    
};

