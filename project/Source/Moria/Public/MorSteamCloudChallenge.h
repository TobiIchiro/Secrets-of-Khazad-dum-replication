#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBubbleState.h"
#include "MorChallengeInstance.h"
#include "MorSteamCloudChallenge.generated.h"

class UBoxComponent;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AMorSteamCloudChallenge : public AActor, public IMorChallengeInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWorldReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCloudActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SteamVents;
    
public:
    AMorSteamCloudChallenge(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RemoveSteamVent(AActor* SteamVent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWorldGenDone();
    
    UFUNCTION(BlueprintCallable)
    void OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSteamVentNum() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloudStateDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloudStateActivated();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AddSteamVent(AActor* SteamVent);
    

    // Fix for true pure virtual functions not being implemented
};

