#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMorGamePauseScopeType.h"
#include "MorGamePauseScopeDescription.h"
#include "MorPauseUtils.generated.h"

class AMorPauseManager;
class UObject;

UCLASS(Blueprintable)
class MORIA_API UMorPauseUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorPauseUtils();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetGamePauseScopeActivated(EMorGamePauseScopeType ScopeType, FName ScopeName, FMorGamePauseScopeDescription Description, bool bActivate, const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamePauseDescriptionSet(const FMorGamePauseScopeDescription& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamePauseDescriptionEmpty(const FMorGamePauseScopeDescription& Description);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AMorPauseManager* GetGamePauseManager(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool DeactivateGamePauseScope(EMorGamePauseScopeType ScopeType, FName ScopeName, const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ActivateGamePauseScope(EMorGamePauseScopeType ScopeType, FName ScopeName, FMorGamePauseScopeDescription Description, const UObject* WorldContext);
    
};

