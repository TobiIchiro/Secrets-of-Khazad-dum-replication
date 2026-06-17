#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "EMorSplashScreenState.h"
#include "EPlayerLoginStatus.h"
#include "MorSplashScreenReadyEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "MorSplashScreenGameState.generated.h"

class ULevelStreamingDynamic;
class UMorLoadingScreen;
class UPackage;
class UWorld;

UCLASS(Blueprintable)
class MORIA_API AMorSplashScreenGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSplashScreenReadyEvent ReadyToPlaySplash;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorSplashScreenState SplashScreenState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplashVideoName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> MainLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorLoadingScreen> LoadingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPackage* LoadedMainLevelPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* LoadedWorldFromPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* StreamingLevel;
    
public:
    AMorSplashScreenGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlaySplashVideo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartupMoviesEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnSplashVideoEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnMainLevelStreamLoaded();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerLoginStatusChange(EPlayerLoginStatus Status);
    
};

