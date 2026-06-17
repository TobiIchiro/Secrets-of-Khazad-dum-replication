#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "MorInteractable.h"
#include "MorInteraction.h"
#include "OnClaimedDelegate.h"
#include "OnUnclaimedDelegate.h"
#include "WasConsumedDelegate.h"
#include "MorMeal.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class MORIA_API AMorMeal : public AMorInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWasConsumed WasConsumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClaimed OnClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnclaimed OnUnclaimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemHandle MealToConsume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction ConsumeInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpoiled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NPCOwner, meta=(AllowPrivateAccess=true))
    ACharacter* NPCOwner;
    
public:
    AMorMeal(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_NPCOwner();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNPCOwner() const;
    
};

