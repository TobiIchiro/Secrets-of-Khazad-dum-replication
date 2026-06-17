#pragma once
#include "CoreMinimal.h"
#include "EMorMultiplayerSessionMode.h"
#include "MorEnumOption.h"
#include "MorMultiplayerSessionModeOption.generated.h"

class UMorMultiplayerSessionModeOption;

UCLASS(Blueprintable)
class MORIA_API UMorMultiplayerSessionModeOption : public UMorEnumOption {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FCustomPostChangeHandler, UMorMultiplayerSessionModeOption*, Option, EMorMultiplayerSessionMode, NewValue);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorMultiplayerSessionMode, FText> LocalizedModeLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomPostChangeHandler CustomPostChangeHandler;
    
public:
    UMorMultiplayerSessionModeOption();

    UFUNCTION(BlueprintCallable)
    void UnsetCustomPostChangeHandler();
    
    UFUNCTION(BlueprintCallable)
    void SetMultiplayerSessionMode(EMorMultiplayerSessionMode NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPostChangeHandler(const UMorMultiplayerSessionModeOption::FCustomPostChangeHandler& NewHandler);
    
    UFUNCTION(BlueprintCallable)
    void ApplyValue();
    
};

