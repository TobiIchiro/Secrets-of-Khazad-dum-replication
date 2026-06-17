#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemHandle.h"
#include "DisplayTipDelegate.h"
#include "MorConstructionRecipeRowHandle.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "MorTipRowHandle.h"
#include "MorTipComponent.generated.h"

class AMorCharacter;
class AMorPlayerController;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorTipComponent : public UActorComponent, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_DisplayTip, meta=(AllowPrivateAccess=true))
    TArray<FMorTipRowHandle> PlayerUnlockedTips;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplayTip DisplayTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorTipRowHandle HealthTip;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* PlayerCharacter;
    
public:
    UMorTipComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnlockTip(FMorTipRowHandle Tip);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DisplayTip();
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterPossession(APawn* OldPawn, APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingBuilt(const FMorConstructionRecipeRowHandle& BuildingRecipe);
    

    // Fix for true pure virtual functions not being implemented
};

