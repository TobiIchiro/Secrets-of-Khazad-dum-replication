#pragma once
#include "CoreMinimal.h"
#include "MorReplicatedManager.h"
#include "OnEventSignatureDelegate.h"
#include "OnHitEventSignatureDelegate.h"
#include "StatsManagerActorDataArray.h"
#include "StatsManagerDataEntry.h"
#include "StatsManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class MORIA_API AStatsManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitEventSignature OnHitEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventSignature OnEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FStatsManagerDataEntry> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FStatsManagerActorDataArray ActorData;
    
public:
    AStatsManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ReportEvent(FName EventName, AActor* Source, float Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueForActor(FName EventName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue(FName EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameWasRevived() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameVulnerableAttacks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameRopesPlaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameRopesClimbed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameRevivedOther() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameRespawns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNamePerfectBlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameEnemiesDefeated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameDwarvesIncapacitated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameDamageSelf() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameDamageReceived() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameDamageDealt() const;
    
};

