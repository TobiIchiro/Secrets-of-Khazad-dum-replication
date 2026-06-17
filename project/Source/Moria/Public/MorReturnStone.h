#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FGKPopupButtonUsedDelegate.h"
#include "MorInteractable.h"
#include "Templates/SubclassOf.h"
#include "MorReturnStone.generated.h"

class AActor;
class APlayerController;
class UFGKPopup;
class UFGKUIScreen;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AMorReturnStone : public AMorInteractable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ReadyCircle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKUIScreen> ReturnConfirmPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReturnConfirmTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReturnConfirmDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReturnConfirmText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReturnConfirmCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> PlayersInCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKPopup* ConfirmPopupInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKPopupButtonUsed RequestConfirmUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKPopupButtonUsed RequestCancelUsed;
    
public:
    AMorReturnStone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RequestReturnViaInteract();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestReturnConfirmed(UFGKPopup* PopupInstance);
    
    UFUNCTION(BlueprintCallable)
    void RequestReturnCanceled(UFGKPopup* PopupInstance);
    
    UFUNCTION(BlueprintCallable)
    void CircleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void CircleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersPresent() const;
    
};

