#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKGlobalManagerInterface.h"
#include "EMorGoToMainMenuReason.h"
#include "EMorSystemMessageBoxResult.h"
#include "EMorSystemMessageBoxType.h"
#include "EMorWorldType.h"
#include "OnLaunchScreenDebugMenuDelegate.h"
#include "Templates/SubclassOf.h"
#include "MorMenuManager.generated.h"

class UMorCharacterSaveSlotManager;
class UMorLoadingScreen;
class UMorMenuButtons;
class UMorMenuManager;
class UMorPopUpWidget;
class UMorWorldSelectItem;
class UMorWorldSelectionManager;

UCLASS(Blueprintable)
class MORIA_API UMorMenuManager : public UObject, public IFGKGlobalManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLaunchScreenDebugMenu OnLaunchScreenDebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorLoadingScreen> StartGameLoadingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorLoadingScreen> LeaveGameLoadingScreenClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainMenuMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SandboxMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorCharacterSaveSlotManager* CharacterSaveSlotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorWorldSelectionManager* WorldSelectionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorPopUpWidget> PopUpClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorMenuButtons* MenuButtons;
    
public:
    UMorMenuManager();

    UFUNCTION(BlueprintCallable)
    bool StartSinglePlayerGame();
    
    UFUNCTION(BlueprintCallable)
    static EMorSystemMessageBoxResult ShowSystemMessageBox(EMorSystemMessageBoxType Type, const FText& Message, const FText& Caption);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressActivity(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetLastGoToMainMenuReason();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldsListUpdated(const TArray<UMorWorldSelectItem*>& Worlds);
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchMultiplayerGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSandboxWorldMapName(const FString& WorldMapName) const;
    
    UFUNCTION(BlueprintCallable)
    bool HostMultiplayerGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorWorldType GetWorldTypeByName(const FString& WorldMapName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSandboxWorldMapName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorGoToMainMenuReason GetLastGoToMainMenuReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMorMenuManager* Get(const UObject* WorldContext);
    

    // Fix for true pure virtual functions not being implemented
};

