#pragma once
#include "CoreMinimal.h"
#include "MorBlueprintCheatsActor.h"
#include "MorHudBlueprintCheatsActor.generated.h"

class UFGKUIManager;
class UUserWidget;

UCLASS(Blueprintable)
class MORIA_API AMorHudBlueprintCheatsActor : public AMorBlueprintCheatsActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UUserWidget*> HideableWidgetsByCheatPath;
    
public:
    AMorHudBlueprintCheatsActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ShowSelectedWidget();
    
    UFUNCTION(BlueprintCallable)
    void RegisterHudCheats(UFGKUIManager* UIManager);
    
    UFUNCTION(BlueprintCallable)
    void HideSelectedWidget();
    
};

