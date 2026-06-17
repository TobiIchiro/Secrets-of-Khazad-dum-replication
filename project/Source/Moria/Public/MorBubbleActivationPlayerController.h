#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MorActivatedBubbleArray.h"
#include "MorBubbleActivationPlayerController.generated.h"

class AMorPlayerController;
class UMorBubbleActivationManager;

UCLASS(Blueprintable, ClassGroup=Custom, Within=MorPlayerController, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorBubbleActivationPlayerController : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorBubbleActivationManager* BubbleActivationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMorActivatedBubbleArray ActivatedBubbles;
    
public:
    UMorBubbleActivationPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetReadyToActivateBubble(const FIntVector& BubbleCoords, uint8 ActivationCounterRaw);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetBubbleUnloading(const FIntVector& BubbleCoords);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnWorldLayoutReady();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientConfirmReadyToActivateBubble(const FIntVector& BubbleCoords);
    
};

