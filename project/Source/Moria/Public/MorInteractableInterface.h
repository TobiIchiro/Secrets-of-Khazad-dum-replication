#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EMorInteractableType.h"
#include "MorFilteredStringHandle.h"
#include "MorOnInteractableNameFilteredDynamicDelegate.h"
#include "MorInteractableInterface.generated.h"

class AActor;
class ACharacter;
class AMorCharacter;
class UTexture2D;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class MORIA_API UMorInteractableInterface : public UInterface {
    GENERATED_BODY()
};

class MORIA_API IMorInteractableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool ShouldCheckInteractorInFov() const PURE_VIRTUAL(ShouldCheckInteractorInFov, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetLastInteractor(AMorCharacter* Interactor) PURE_VIRTUAL(SetLastInteractor,);
    
protected:
    UFUNCTION(BlueprintCallable)
    virtual void SetIsInteractive(bool bValue) PURE_VIRTUAL(SetIsInteractive,);
    
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsUsableBy(ACharacter* Interactor) const PURE_VIRTUAL(IsUsableBy, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsMissingConstructionRequirements() const PURE_VIRTUAL(IsMissingConstructionRequirements, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetUnfilteredFullInteractableName(const ACharacter* Interactor) const PURE_VIRTUAL(GetUnfilteredFullInteractableName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual AMorCharacter* GetLastInteractor() const PURE_VIRTUAL(GetLastInteractor, return NULL;);
    
protected:
    UFUNCTION(BlueprintCallable)
    virtual bool GetIsInteractive() const PURE_VIRTUAL(GetIsInteractive, return false;);
    
public:
    UFUNCTION(BlueprintCallable)
    virtual FVector GetInteractionTargetLocation() const PURE_VIRTUAL(GetInteractionTargetLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual EMorInteractableType GetInteractableType() const PURE_VIRTUAL(GetInteractableType, return EMorInteractableType::MorInteractable;);
    
    UFUNCTION(BlueprintCallable)
    virtual AActor* GetInteractableActor() PURE_VIRTUAL(GetInteractableActor, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetFilteredInteractableName(const ACharacter* Interactor, UPARAM(Ref) FMorFilteredStringHandle& FilterHandle, const FMorOnInteractableNameFilteredDynamic& OnDisplayNameFiltered) const PURE_VIRTUAL(GetFilteredInteractableName,);
    
    UFUNCTION(BlueprintCallable)
    virtual UTexture2D* GetDisplayIcon() const PURE_VIRTUAL(GetDisplayIcon, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CheckInteractorInFov(const FVector& InteractorLocation, const FVector& InteractorForward) PURE_VIRTUAL(CheckInteractorInFov, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanSetCustomDisplayName() const PURE_VIRTUAL(CanSetCustomDisplayName, return false;);
    
};

