#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorCharacterSelectionUpdatedDelegate.h"
#include "MorCharSelectionManager.generated.h"

class AMorCharSelectionManager;
class AMorCustomizationMannequin;
class UObject;

UCLASS(Blueprintable)
class MORIA_API AMorCharSelectionManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorCharacterSelectionUpdated OnCharacterSelectionUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMorCustomizationMannequin*> CustomizationMannequinsRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorCustomizationMannequin* SelectedCustomizationMannequinRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialMannequinPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AMorCustomizationMannequin*> PendingMannequinsToUnhide;
    
public:
    AMorCharSelectionManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisible(AMorCustomizationMannequin* Mannequin, bool bMannequin, bool bText);
    
    UFUNCTION(BlueprintCallable)
    void SelectFreeCustomization();
    
    UFUNCTION(BlueprintCallable)
    void RefreshSelection(int32 ToCustomization);
    
    UFUNCTION(BlueprintCallable)
    void PreviousCharacter();
    
    UFUNCTION(BlueprintCallable)
    void NextCharacter();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnCustomizationsLocallyApplied();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedCustomizationSaveSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorCustomizationMannequin* GetSelectedCustomizationMannequin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadedCustomizationCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AMorCharSelectionManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSelectedCustomization() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroySavedCustomization();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmedSelectedCustomization(int32 CustomizationSaveSlotNumber);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSelectedCustomizationsDirty() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyCustomizations(int32 CustomizationSaveSlotNumber);
    
};

