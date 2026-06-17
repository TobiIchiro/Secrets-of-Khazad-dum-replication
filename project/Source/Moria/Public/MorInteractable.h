#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FGKDisplayNameInterface.h"
#include "EMorInteractableType.h"
#include "MorFilteredStringHandle.h"
#include "MorInteractableInterface.h"
#include "MorOnInteractableNameChangedDelegate.h"
#include "MorOnInteractableNameFilteredDynamicDelegate.h"
#include "MorProxyActorInterface.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "OnNewInteractorDelegate.h"
#include "Templates/SubclassOf.h"
#include "MorInteractable.generated.h"

class ACharacter;
class AInventoryItem;
class AMorCharacter;
class UAnimMontage;
class UBoxComponent;
class UMorInteractionPoint;
class USceneComponent;
class UTexture2D;
class UTransformLocatorComponent;

UCLASS(Blueprintable)
class MORIA_API AMorInteractable : public AActor, public IMorInteractableInterface, public IFGKDisplayNameInterface, public IMorProxyActorInterface, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnInteractableNameChanged OnInteractableNameChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewInteractor OnNewInteractor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotAnimateWithAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractAnim_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractAnim_Collect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimateMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> EquipItemForAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTransformLocatorComponent*> InteractFromComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InteractPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanHaveOutline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignCharacterOnInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorCharacter* LastInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorInteractionPoint* InteractionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHaveVfxShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickRateReductionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighTickRateDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighTickRateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowTickRateDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowTickRateInterval;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInteracted: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsInteractive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
public:
    AMorInteractable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetLastInteractor(AMorCharacter* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractive(bool bValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInteractAnim(UAnimMontage* NewAnimMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SavePostRestoreEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeselected();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInteractive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInteractionTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorInteractableType GetInteractableType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetDisplayIcon() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool ShouldCheckInteractorInFov() const override PURE_VIRTUAL(ShouldCheckInteractorInFov, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsableBy(ACharacter* Interactor) const override PURE_VIRTUAL(IsUsableBy, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsMissingConstructionRequirements() const override PURE_VIRTUAL(IsMissingConstructionRequirements, return false;);
    
    UFUNCTION(BlueprintCallable)
    FText GetUnfilteredFullInteractableName(const ACharacter* Interactor) const override PURE_VIRTUAL(GetUnfilteredFullInteractableName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    AMorCharacter* GetLastInteractor() const override PURE_VIRTUAL(GetLastInteractor, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetInteractableActor() override PURE_VIRTUAL(GetInteractableActor, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    void GetFilteredInteractableName(const ACharacter* Interactor, UPARAM(Ref) FMorFilteredStringHandle& FilterHandle, const FMorOnInteractableNameFilteredDynamic& OnDisplayNameFiltered) const override PURE_VIRTUAL(GetFilteredInteractableName,);
    
    UFUNCTION(BlueprintCallable)
    bool CheckInteractorInFov(const FVector& InteractorLocation, const FVector& InteractorForward) override PURE_VIRTUAL(CheckInteractorInFov, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanSetCustomDisplayName() const override PURE_VIRTUAL(CanSetCustomDisplayName, return false;);
    
};

