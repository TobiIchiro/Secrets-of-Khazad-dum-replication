#pragma once
#include "CoreMinimal.h"
#include "EMorMultiplayerNamesMode.h"
#include "MorEnumOption.h"
#include "MorMultiplayerNamesModeOption.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorMultiplayerNamesModeOption : public UMorEnumOption {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorMultiplayerNamesMode, FText> LocalizedModeLabels;
    
public:
    UMorMultiplayerNamesModeOption();

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnCanAccessUserGeneratedContentChanged(bool bNewAccess);
    
};

