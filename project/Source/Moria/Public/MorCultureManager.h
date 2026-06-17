#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameCultureChangedDelegate.h"
#include "TextsLocalizationsChangedDelegate.h"
#include "MorCultureManager.generated.h"

class UMorCultureManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCultureManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CulturesHiddenFromMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameCultureChanged OnGameCultureChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextsLocalizationsChanged OnTextsLocalizationsChanged;
    
    UMorCultureManager();

private:
    UFUNCTION(BlueprintCallable)
    void HandleTextsLocalizationsChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleGameCultureChanged() const;
    
public:
    UFUNCTION(BlueprintCallable)
    static UMorCultureManager* Get();
    
};

