#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EHostGameFailedReason.h"
#include "ELoginFailedReason.h"
#include "EMorOssLoginFailedReason.h"
#include "EPlayerHostStatus.h"
#include "EPlayerLoginStatus.h"
#include "MorDedicatedServerRetryConfig.h"
#include "MorDedicatedServerEntryGameMode.generated.h"

class UMorGameSessionManager;
class UMorMenuManager;
class UMorWorldSelectItem;
class UMorWorldSelectionManager;

UCLASS(Blueprintable, NonTransient)
class MORIA_API AMorDedicatedServerEntryGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDedicatedServerRetryConfig RetryConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorGameSessionManager* GameSessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorWorldSelectionManager* WorldSelectionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorMenuManager* MenuManager;
    
public:
    AMorDedicatedServerEntryGameMode(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnWorldsListLoaded(const TArray<UMorWorldSelectItem*>& Worlds);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPreviousSessionDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPremiumSubscriptionChecked(bool bIsPremium);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerLoginStatusChanged(EPlayerLoginStatus LoginStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLoginCompleted(bool bIsSuccessful, ELoginFailedReason Reason, EMorOssLoginFailedReason OssReason);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnHostGameStatusChanged(EPlayerHostStatus Status, EHostGameFailedReason Reason);
    
};

