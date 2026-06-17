#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EMorInteractableType.h"
#include "MorFilteredStringHandle.h"
#include "MorInteractableInterface.h"
#include "MorInteraction.h"
#include "MorMerchantRowHandle.h"
#include "MorMerchantTradeInteractionDelegate.h"
#include "MorMerchantTradeLocalInteractionDelegate.h"
#include "MorOnInteractableNameFilteredDynamicDelegate.h"
#include "MorMerchantComponent.generated.h"

class AActor;
class ACharacter;
class AMorCharacter;
class AMorInteractableManager;
class UMorNPCConversationComponent;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorMerchantComponent : public UActorComponent, public IMorInteractableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MerchantHandle, meta=(AllowPrivateAccess=true))
    FMorMerchantRowHandle Merchant;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction TradeInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction TalkInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* LastInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorInteractableManager* InteractableManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWaitingForInteractionRegistration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorNPCConversationComponent* ConversationComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMerchantTradeInteraction OnTradeInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMerchantTradeLocalInteraction OnTradeLocalInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMerchantTradeInteraction OnTalkInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMerchantTradeLocalInteraction OnTalkLocalInteraction;
    
    UMorMerchantComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RegisterToInteractableManager();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MerchantHandle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorMerchantRowHandle GetMerchantRowHandle() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool ShouldCheckInteractorInFov() const override PURE_VIRTUAL(ShouldCheckInteractorInFov, return false;);
    
    UFUNCTION(BlueprintCallable)
    void SetLastInteractor(AMorCharacter* Interactor) override PURE_VIRTUAL(SetLastInteractor,);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsInteractive(bool bValue) override PURE_VIRTUAL(SetIsInteractive,);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsUsableBy(ACharacter* Interactor) const override PURE_VIRTUAL(IsUsableBy, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsMissingConstructionRequirements() const override PURE_VIRTUAL(IsMissingConstructionRequirements, return false;);
    
    UFUNCTION(BlueprintCallable)
    FText GetUnfilteredFullInteractableName(const ACharacter* Interactor) const override PURE_VIRTUAL(GetUnfilteredFullInteractableName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    AMorCharacter* GetLastInteractor() const override PURE_VIRTUAL(GetLastInteractor, return NULL;);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetIsInteractive() const override PURE_VIRTUAL(GetIsInteractive, return false;);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetInteractionTargetLocation() const override PURE_VIRTUAL(GetInteractionTargetLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    EMorInteractableType GetInteractableType() const override PURE_VIRTUAL(GetInteractableType, return EMorInteractableType::MorInteractable;);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetInteractableActor() override PURE_VIRTUAL(GetInteractableActor, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    void GetFilteredInteractableName(const ACharacter* Interactor, UPARAM(Ref) FMorFilteredStringHandle& FilterHandle, const FMorOnInteractableNameFilteredDynamic& OnDisplayNameFiltered) const override PURE_VIRTUAL(GetFilteredInteractableName,);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetDisplayIcon() const override PURE_VIRTUAL(GetDisplayIcon, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool CheckInteractorInFov(const FVector& InteractorLocation, const FVector& InteractorForward) override PURE_VIRTUAL(CheckInteractorInFov, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanSetCustomDisplayName() const override PURE_VIRTUAL(CanSetCustomDisplayName, return false;);
    
};

