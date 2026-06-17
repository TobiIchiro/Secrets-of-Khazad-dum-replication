#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemCount.h"
#include "EBuildMode.h"
#include "EInteractState.h"
#include "MorConstructionRecipeRowHandle.h"
#include "MorConstructionRowHandle.h"
#include "MorInteractable.h"
#include "MorInteraction.h"
#include "MorConstructionSite.generated.h"

class ACharacter;
class UBoxComponent;
class UMaterialInterface;
class USceneComponent;

UCLASS(Blueprintable, HideDropdown)
class MORIA_API AMorConstructionSite : public AMorInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionRecipeRowHandle PlacedRecipeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ProgressMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ComponentGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TriggerAreaMinExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction DepositInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction BuildInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FItemCount> RemainingRequiredMaterials;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMorConstructionRecipeRowHandle RecipeHandleInternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FItemCount> DepositedMaterials;
    
public:
    AMorConstructionSite(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetConstruction(FMorConstructionRowHandle ConstructionHandle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBuildModeStarted(EBuildMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildModeEnded(EBuildMode Mode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllMaterials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractState GetDepositState(const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDepositEnabledText(const FText& EnabledTextFormat, const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDepositDisabledText(const FText& DisabledTextFormat, const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetBuildText(const FText& TextFormat, const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractState GetBuildState(const ACharacter* Interactor) const;
    
};

