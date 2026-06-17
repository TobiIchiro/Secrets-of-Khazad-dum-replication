#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/SphereComponent.h"
#include "InteractContext.h"
#include "Templates/SubclassOf.h"
#include "MorInteractComponent.generated.h"

class AActor;
class AMorCharacter;
class AMorInteractable;
class AMorInteractableManager;
class IMorInteractableInterface;
class UMorInteractableInterface;
class UGameplayAbility;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorInteractComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> InteractAbility;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMorInteractable*> CurrentInteracts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMorInteractableInterface> CurrentInteractSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectWithCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMorInteractableInterface> MostRecentInteractableUsed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorInteractableManager* InteractableManager;
    
public:
    UMorInteractComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInteractableCustomName(const TScriptInterface<IMorInteractableInterface>& Interactable, const FString& CustomName);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetInteractableCustomName(UObject* ObjectInteractable, const FString& CustomName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerInteract(UObject* ObjectInteractable, FInteractContext InteractContext);
    
public:
    UFUNCTION(BlueprintCallable)
    void OverlapEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IMorInteractableInterface> GetSelectedInteractable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IMorInteractableInterface> GetNearestInteractableOfType(UClass* InteractableClass, bool bIgnoreVisibleInteractCheck) const;
    
};

