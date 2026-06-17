#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VersionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UVersionWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UVersionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WorldLayoutInitialized(const FString& Seed, bool bIsConfigModified);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VersionLoaded(const FString& Version);
    
private:
    UFUNCTION(BlueprintCallable)
    FString ReadFile(const FString& Filename) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleOnWorldReady();
    
};

