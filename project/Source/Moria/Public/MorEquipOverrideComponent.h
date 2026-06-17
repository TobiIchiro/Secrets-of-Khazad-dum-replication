#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemHandle.h"
#include "MorEquipOverrideComponent.generated.h"

class UAnimSequenceBase;
class UFGKAnimNotifyState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorEquipOverrideComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMorEquipOverrideComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveHideAllRequest();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateBeginReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation, float TotalAnimationTime);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(const FItemHandle& Item);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHidePrimaryRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHideOffhandRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHideHolsterRequest() const;
    
    UFUNCTION(BlueprintCallable)
    void AddHideAllRequest();
    
};

