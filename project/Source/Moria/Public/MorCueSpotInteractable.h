#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorInteractable.h"
#include "MorCueSpotInteractable.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class MORIA_API AMorCueSpotInteractable : public AMorInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> VisibleElements;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CueSpotInteractionText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PlayersThatHaveInteractedWithThis, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PlayersThatHaveInteractedWithThis;
    
public:
    AMorCueSpotInteractable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetupInteractions();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersThatHaveInteractedWithThis(TArray<FGuid> Players);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MarkCueSpotAsRead();
    
};

