#pragma once
#include "CoreMinimal.h"
#include "MorInteractable.h"
#include "MorVenerationLampJoinSongExternalSignatureDelegate.h"
#include "MorVenerationLamp.generated.h"

class UVoiceComponent;

UCLASS(Blueprintable)
class MORIA_API AMorVenerationLamp : public AMorInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorVenerationLampJoinSongExternalSignature OnJoinSongExternal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_HasFinishedAnimations, meta=(AllowPrivateAccess=true))
    bool bHasFinishedAnimations;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVoiceComponent* VoiceInteractor;
    
public:
    AMorVenerationLamp(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HasFinishedAnimations(bool NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWasActivated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetVenerationSongPlayingID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRepFinishedAnimations(bool NewState);
    
};

