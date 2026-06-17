#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EMorMainMenuMode.h"
#include "ESaveMigrationState.h"
#include "MorMainMenuChangeModeDelegateDelegate.h"
#include "MorMainMenuModeConfig.h"
#include "MorMainMenuModeTransitionConfig.h"
#include "MorSaveFileInfo.h"
#include "MorWorldSaveFileInfo.h"
#include "OnMigrationCompleteDelegate.h"
#include "Templates/SubclassOf.h"
#include "MorMainMenuGameMode.generated.h"

class AMorMainMenuPlayerController;
class UMorLoadingScreen;
class UMorMainMenuModeTransition;

UCLASS(Blueprintable, NonTransient)
class MORIA_API AMorMainMenuGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMainMenuChangeModeDelegate PreparingMainMenuModeChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMainMenuChangeModeDelegate PreMainMenuModeChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMainMenuChangeModeDelegate PostMainMenuModeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorWorldSaveFileInfo> LegacyWorldsToMigrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorWorldSaveFileInfo> RemainingLegacyWorlds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorSaveFileInfo> LegacyCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESaveMigrationState MigrationState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMigrationComplete OnMigrationComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorMainMenuMode DefaultMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorMainMenuModeTransition* PendingModeTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorMainMenuModeTransition* CancelledModeTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorMainMenuModeConfig> Modes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorMainMenuModeTransitionConfig> Transitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorLoadingScreen> LoadingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OkButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorReadingWorldSaveGameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OssConnectionErrorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PragmaTamperedText;
    
public:
    AMorMainMenuGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RequestModeChange(EMorMainMenuMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    bool IsMigrationComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorMainMenuPlayerController* GetPlayerController() const;
    
};

