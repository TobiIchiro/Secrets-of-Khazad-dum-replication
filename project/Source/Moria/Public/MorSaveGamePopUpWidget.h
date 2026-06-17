#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MorSaveGamePopUpWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorSaveGamePopUpWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMorSaveGamePopUpWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowPopUpBP(const int32& ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClosePopUpBP();
    
};

