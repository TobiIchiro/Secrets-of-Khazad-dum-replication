#pragma once
#include "CoreMinimal.h"
#include "EBuildCameraMode.h"
#include "EBuildMode.h"
#include "EConstructionPlacementMode.h"
#include "MorConstructionRecipeRowHandle.h"
#include "Templates/SubclassOf.h"
#include "WorldTargetAbility.h"
#include "MorGameplayAbility_ConstructionPlacement.generated.h"

class AFGKPlayerCameraManager;
class AGameplayAbilityTargetActor_Placement;
class UFGKBaseCameraState;
class UMorBuildingComponent;

UCLASS(Blueprintable, HideDropdown)
class MORIA_API UMorGameplayAbility_ConstructionPlacement : public UWorldTargetAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildMode BuildMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionRecipeRowHandle FixedRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExitAfterBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstructionPlacementMode DefaultPlacementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorBuildingComponent* BuildingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKBaseCameraState> CameraStateOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKPlayerCameraManager* CameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayAbilityTargetActor_Placement* SpawnedActorPlacement;
    
public:
    UMorGameplayAbility_ConstructionPlacement();

protected:
    UFUNCTION(BlueprintCallable)
    void TryBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCameraMode(EBuildCameraMode NewModeIn);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectRecipe(const FMorConstructionRecipeRowHandle& Recipe);
    
    UFUNCTION(BlueprintCallable)
    EConstructionPlacementMode GetPlacementMode();
    
};

