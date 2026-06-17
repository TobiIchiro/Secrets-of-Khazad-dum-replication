#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Input/Events.h"
#include "EMorFocusMode.h"
#include "MorCustomFocusRememberer.h"
#include "MorUIFocusFunctionLibrary.generated.h"

class APlayerController;
class UObject;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class MORIA_API UMorUIFocusFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorUIFocusFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool WasFocusModeChangedThisFrameTo(const UObject* WorldContext, EMorFocusMode FocusMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomFocusUIOnly(UWidget* Target, UUserWidget* ParentWidget, bool ValidateParent);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomFocusGameAndUI(UWidget* Target, UUserWidget* ParentWidget, bool ValidateParent);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomFocus(UWidget* Target, UUserWidget* ParentWidget, bool ValidateParent);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreCustomFocus(FMorCustomFocusRememberer FocusRememberer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FMorCustomFocusRememberer RememberCustomFocus(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMouseFocusEvent(const FFocusEvent& FocusEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DeactivateCustomFocus(const UObject* WorldContext, APlayerController* FocusUser);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateCustomFocus(UUserWidget* CustomFocusParent);
    
};

