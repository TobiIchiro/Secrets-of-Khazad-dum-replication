#pragma once
#include "CoreMinimal.h"
#include "MorUIMainMenuScreen.h"
#include "OnRenameDialogButtonClickedDelegate.h"
#include "RenameDialogButtonsKey.h"
#include "MorCharacterCreatorRenameDialog.generated.h"

class UEditableTextBox;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterCreatorRenameDialog : public UMorUIMainMenuScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNameLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisallowedWords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRenameDialogButtonsKey> ButtonsKeys;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* RenameBox;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRenameDialogButtonClicked OnRenameDialogButtonClicked;
    
public:
    UMorCharacterCreatorRenameDialog();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckNewCharacterName(const FString& NewName);
    
};

