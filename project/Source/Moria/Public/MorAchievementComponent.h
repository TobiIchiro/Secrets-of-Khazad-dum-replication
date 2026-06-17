#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorAchievementProgress.h"
#include "MorAchievementProgressSignatureDelegate.h"
#include "MorAchievementRowHandle.h"
#include "MorAchievementUnlockedSignatureDelegate.h"
#include "MorAnyItemRowHandle.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "MorZoneRowHandle.h"
#include "MorAchievementComponent.generated.h"

class AMorCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorAchievementComponent : public UActorComponent, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_UpdateAchievementProgress, meta=(AllowPrivateAccess=true))
    TArray<FMorAchievementProgress> PlayerAchievementProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAchievementProgressSignature OnAchievementProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAchievementUnlockedSignature OnAchievementUnlocked;
    
    UMorAchievementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReportAchievementManual(const FMorAchievementRowHandle& Achievement);
    
    UFUNCTION(BlueprintCallable)
    void ReportAchievementZoneEntered(FMorZoneRowHandle ZoneEntered);
    
    UFUNCTION(BlueprintCallable)
    void ReportAchievementManual(const FMorAchievementRowHandle& Achievement);
    
    UFUNCTION(BlueprintCallable)
    void ReportAchievementItemCrafted(const FMorAnyItemRowHandle& ItemCrafted);
    
    UFUNCTION(BlueprintCallable)
    void ReportAchievementEnemyKilled(AMorCharacter* EnemyKilledClass);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateAchievementProgress(const TArray<FMorAchievementProgress> OldPlayerAchievementProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAchievementUnlocked(const FMorAchievementRowHandle& Achievement) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAchievementProgress(const FMorAchievementRowHandle& Achievement) const;
    

    // Fix for true pure virtual functions not being implemented
};

