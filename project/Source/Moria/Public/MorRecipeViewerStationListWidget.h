#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "Templates/SubclassOf.h"
#include "MorRecipeViewerStationListWidget.generated.h"

class UUserWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorRecipeViewerStationListWidget : public UFGKUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* StationList;
    
    UMorRecipeViewerStationListWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void EndModifyStationList();
    
    UFUNCTION(BlueprintCallable)
    void CLearStationList();
    
    UFUNCTION(BlueprintCallable)
    void BeginModifyStationList();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* AddToStationList(TSubclassOf<UUserWidget> WidgetClass);
    
};

