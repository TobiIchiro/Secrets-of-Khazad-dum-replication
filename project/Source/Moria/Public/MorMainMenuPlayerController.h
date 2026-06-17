#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EMorMainMenuMode.h"
#include "Templates/SubclassOf.h"
#include "MorMainMenuPlayerController.generated.h"

class AMorMainMenuGameMode;
class UMorMainMenuPlayerControllerModeImpl;
class UObject;

UCLASS(Blueprintable)
class MORIA_API AMorMainMenuPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorMainMenuPlayerControllerModeImpl* CurrentModeImpl;
    
public:
    AMorMainMenuPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestModeChange(EMorMainMenuMode NewMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePreparingToChangeMode(EMorMainMenuMode NewMode, EMorMainMenuMode FromMode);
    
    UFUNCTION(BlueprintCallable)
    void HandlePreChangeMode(EMorMainMenuMode NewMode, EMorMainMenuMode FromMode);
    
    UFUNCTION(BlueprintCallable)
    void HandlePostChangeMode(EMorMainMenuMode NewMode, EMorMainMenuMode FromMode);
    
public:
    UFUNCTION(BlueprintCallable)
    UObject* GetModeImplementation(TSubclassOf<UMorMainMenuPlayerControllerModeImpl> ImplementationClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorMainMenuGameMode* GetMainMenuGameMode() const;
    
};

