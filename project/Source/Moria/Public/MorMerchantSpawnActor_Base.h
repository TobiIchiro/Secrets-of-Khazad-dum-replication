#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EBubbleState.h"
#include "MorAIChallengeActor.h"
#include "MorMerchantRowHandle.h"
#include "MorMerchantSpawnActor_Base.generated.h"

class AActor;
class UMorAISpawnerComponent;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AMorMerchantSpawnActor_Base : public AMorAIChallengeActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMerchantRowHandle MerchantHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcePresenceAndSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorAISpawnerComponent* SpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod SpawnMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
public:
    AMorMerchantSpawnActor_Base(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState);
    
};

