#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "FGKCheatManager.generated.h"

class AFGKPlayerController;
class UInputComponent;

UCLASS(Blueprintable)
class FGK_API UFGKCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKPlayerController* PlayerController;
    
public:
    UFGKCheatManager();

protected:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCharacterDebugText();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpeedUpTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpeedDownTime();
    
    UFUNCTION(BlueprintCallable)
    void Skip();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetTimeSpeed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PreviousInputScheme();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NextInputScheme();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NetworkProfilerEnable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NetworkProfilerDisable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NetworkProfilerAutostop(float TimeSeconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MouseWheelUp();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MouseWheelDown();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MiddleMousePressed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputDebugPreviousCharacter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputDebugNextCharacter();
    
    UFUNCTION(BlueprintCallable)
    void Heal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllGod();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddTestDebugMessage();
    
};

