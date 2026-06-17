#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "MorZoomieConfirmWidget.generated.h"

class UButton;
class UPlayerHintWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorZoomieConfirmWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ConfirmButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CellPositionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CellNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CellBubbleNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CellContentsLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CellZoneNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlayerHintWidget> PlayerHintWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerHintWidget* PlayerHintWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotInBaseHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EnemyNearbyHint;
    
public:
    UMorZoomieConfirmWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConfirmed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelled();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnConfirmButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCancelButtonClicked();
    
};

