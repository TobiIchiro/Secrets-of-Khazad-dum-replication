#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FGKGameInstanceBase.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKGameInstanceBase : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLevelFullyLoaded);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelFullyLoaded OnLevelFullyLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStillStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLevelsStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UObject*> ActiveGlobalManagerMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LevelMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> GlobalManagers;
    
public:
    UFGKGameInstanceBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleHelp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestartGameLevel(const FName& LevelName);
    
    UFUNCTION(BlueprintCallable)
    bool LoadNextLevel(int32 NextWorldIdx, bool bSkipMovie, bool bSkipLoadingScreen);
    
    UFUNCTION(BlueprintCallable)
    bool LoadLevel(FName RowName, bool bSkipMovie, bool bSkipLoadingScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadGameLevel(const FName& LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoToMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNextLevel(FName RowName, int32 NextIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLevelPathName(FName RowName) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UObject* GetGlobalManagerInternal(const UClass* ManagerClass, bool bExactMatch);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeOutAndHideLoadingScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeInAndShowLoadingScreen();
    
};

