#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorPlantedFloraReceptacle.h"
#include "PlantedTreeFloraCanGrowStateChangedDelegate.h"
#include "PlantedTreeFloraSubGrowthStageChangedDelegate.h"
#include "MorPlantedTreeFloraReceptacle.generated.h"

class UMorBreakableComponent;

UCLASS(Blueprintable)
class MORIA_API AMorPlantedTreeFloraReceptacle : public AMorPlantedFloraReceptacle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlantedTreeFloraCanGrowStateChanged OnCanGrowStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlantedTreeFloraSubGrowthStageChanged OnSubGrowthStageChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorBreakableComponent* Breakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CanGrow, meta=(AllowPrivateAccess=true))
    bool bCanGrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentSubGrowthStage, meta=(AllowPrivateAccess=true))
    int32 CurrentSubGrowthStage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ColliderOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrowthRadiusCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReadyRadiusCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    float RandomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    float RandomYaw;
    
public:
    AMorPlantedTreeFloraReceptacle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentSubGrowthStage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CanGrow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBreak(bool bPreRuined);
    
};

