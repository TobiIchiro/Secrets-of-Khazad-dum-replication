#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerController.h"
#include "FGKRequestInputInteractInterface.h"
#include "FGKTeleportParams.h"
#include "OnPlayerPawnChangedDelegate.h"
#include "OnPlayerSkipDelegate.h"
#include "Templates/SubclassOf.h"
#include "FGKPlayerController.generated.h"

class AFGKBaseCharacter;
class UFGKActorFSMComponent;
class UFGKAlternativeInputScheme;
class UFGKCheatManager;
class UFGKCheatsComponent;
class UFGKInputState;

UCLASS(Blueprintable)
class FGK_API AFGKPlayerController : public APlayerController, public IFGKRequestInputInteractInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPawnChanged OnPawnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSkip OnSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKCheatsComponent* CheatsComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFGKAlternativeInputScheme*> AlternativeInputSchemes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* InputFSMComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* PossessedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKCheatManager* MyCheatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKInputState* ActiveCharacterInputState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentAlternativeInputSchemeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> DefaultActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> DefaultAxisMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGameIsFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsingGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastMoveRightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastLookTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LastLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D RotationRawInput;
    
public:
    AFGKPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnblockMenu(FName Menu);
    
    UFUNCTION(BlueprintCallable)
    void SetUsingGamepad(bool bGamepad);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DebugNextCharacter(bool bReverse);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CreateAndProcessNewCharacter(AFGKBaseCharacter* CurrentCharacter, TSubclassOf<AFGKBaseCharacter> NewCharacterClass);
    
    UFUNCTION(BlueprintCallable)
    void RequestTeleportTo(const FVector& DestLocation, const FRotator& DestRotation, const FFGKTeleportParams& TeleportParams);
    
    UFUNCTION(BlueprintCallable)
    void RequestMenu(FName Menu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInputDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRotationRawInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKActorFSMComponent* GetInputFSMComp() const;
    
    UFUNCTION(BlueprintCallable)
    void DisablePlayerInput(bool bInDisablePlayerInput);
    
    UFUNCTION(BlueprintCallable)
    void BlockMenu(FName Menu);
    

    // Fix for true pure virtual functions not being implemented
};

