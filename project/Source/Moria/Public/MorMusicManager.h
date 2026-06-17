#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "FGKManager.h"
#include "GameplayTagContainer.h"
#include "ActiveMusicAkComponents.h"
#include "BGMHistory.h"
#include "EBGMType.h"
#include "EMorMusic.h"
#include "MorBGMMusicCooldownParameters.h"
#include "MorBGMRowHandle.h"
#include "MorDwarfCombatMusicTracking.h"
#include "MusicBusLevelRTPCs.h"
#include "MorMusicManager.generated.h"

class AMorCharacter;
class AMorSingingManager;
class UAkCallbackInfo;
class UAkSwitchValue;
class UMorBackgroundMusicManager;
class UMorLoadingScreenManager;

UCLASS(Blueprintable)
class MORIA_API AMorMusicManager : public AFGKManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorMusic, FMusicBusLevelRTPCs> MusicBusLevelRTPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMusicDucking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMorMusic> DuckableMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DuckedVolumeLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorMusic, float> MusicTypeToProximityCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorMusic, FActiveMusicAkComponents> CurrentAkComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMorMusic CurrentMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EBGMType CurrentBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorSingingManager* SingingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBackgroundMusicManager* BackgroundMusicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorLoadingScreenManager* LoadingScreenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* LocalDwarf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBGMType, FMorBGMMusicCooldownParameters> BackgroundMusicCooldowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyProximityForCombatMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllyProximityForCombatMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumEnemyToTriggerCombatBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToFilterOutEnemyAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* BGMSwitchDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* BGMSwitchTension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorBGMRowHandle AtHomeBGMRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorBGMRowHandle CurrentBGMRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FBGMHistory> RoamingBGMHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorDwarfCombatMusicTracking> DwarfCombatTracking;
    
public:
    AMorMusicManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void BGMCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

