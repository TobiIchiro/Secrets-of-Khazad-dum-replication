#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKUIScreen.h"
#include "EBuildProcess.h"
#include "EConstructionPlacementMode.h"
#include "EConstructionValidity.h"
#include "MorConstructionRecipeRowHandle.h"
#include "OnBuildInitiatedSignatureDelegate.h"
#include "OnSelectionChangedSignatureDelegate.h"
#include "BuildOverlayWidget.generated.h"

class AGameplayAbilityTargetActor_Placement;
class UMorBuildingComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UBuildOverlayWidget : public UFGKUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectionChangedSignature OnSelectionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildInitiatedSignature OnBuildInitiated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorBuildingComponent* BuildingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGameplayAbilityTargetActor_Placement> TargetActor;
    
public:
    UBuildOverlayWidget();

    UFUNCTION(BlueprintCallable)
    void ToggleBuildCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetConstructionValidity(EConstructionValidity Validity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectRecipeIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SelectRecipe(const FMorConstructionRecipeRowHandle& RecipeHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Rotate(bool bCounterClockwise);
    
    UFUNCTION(BlueprintCallable)
    void ResetPushPull();
    
    UFUNCTION(BlueprintCallable)
    void RequestDeconstruct();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRotationChanged(float NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void OnPushPullOffsetChanged(const FVector& NewOffset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncrementPushPull(const FVector& Delta);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorConstructionRecipeRowHandle GetSelectedRecipeHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBuildProcess GetProcess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EConstructionPlacementMode GetPlacementMode() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FMorConstructionRecipeRowHandle GetFixedRecipe();
    
    UFUNCTION(BlueprintCallable)
    void BuildConstruction();
    
};

