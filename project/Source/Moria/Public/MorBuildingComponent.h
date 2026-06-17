#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BuildModeEventDelegate.h"
#include "EBuildFailureReason.h"
#include "EBuildProcess.h"
#include "MorConstructionRecipeDefinition.h"
#include "MorConstructionRecipeRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorBuildingComponent.generated.h"

class AActor;
class AMorCharacter;
class AMorConstructionSite;
class UBuildOverlayWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorBuildingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildModeEvent ModeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildModeEvent ModeEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorConstructionRecipeRowHandle LastSelectedRecipe;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorConstructionSite> ConstructionSiteCDO;
    
public:
    UMorBuildingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBuildTargetTransform() const;
    
    UFUNCTION(BlueprintCallable)
    UBuildOverlayWidget* GetActiveBuildingWidget();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientNotifyConstructionFailure(const TArray<EBuildFailureReason>& FailReasons);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBuildWithProcess(const FMorConstructionRecipeDefinition& Recipe, const FTransform& TargetTransform, const EBuildProcess ChosenProcess, TArray<EBuildFailureReason>& OutFailReasons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBuild(const FMorConstructionRecipeDefinition& Recipe, const FTransform& TargetTransform, TArray<EBuildFailureReason>& OutFailReasons) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BuildNewConstruction(const FMorConstructionRecipeRowHandle& RecipeHandle, AMorCharacter* Player, const FTransform& Transform, const EBuildProcess ChosenProcess, bool bBuildAsFoundation, AActor* ConnectedTo, float StabilityEstimate);
    
};

