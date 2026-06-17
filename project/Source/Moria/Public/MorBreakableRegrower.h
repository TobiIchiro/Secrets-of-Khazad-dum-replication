#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorBreakable.h"
#include "MorPostActivateActorInitializer.h"
#include "Templates/SubclassOf.h"
#include "MorBreakableRegrower.generated.h"

class AActor;

UCLASS(Blueprintable)
class MORIA_API AMorBreakableRegrower : public AMorBreakable, public IMorPostActivateActorInitializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> BreakablesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRegrowInsideHearthRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ChildBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SleepCountToRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentNightCount;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 LastNightCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bContainerSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid ChildBreakableGuid;
    
public:
    AMorBreakableRegrower(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateInvulnerability();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSleepAdvance(float JumpedGameTimeinSeconds, float JumpedRealTimeinSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChildBreakableBroken(bool bPreRuined);
    

    // Fix for true pure virtual functions not being implemented
};

