#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MineralDepositVoxelEffect.h"
#include "MorVoxelEffectsComponent.generated.h"

class UMoriaMineralPropertyAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorVoxelEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMineralDepositVoxelEffect MineralDepositVoxelEffectPendingUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoriaMineralPropertyAsset* MostRecentMineralPropertyAsset;
    
public:
    UMorVoxelEffectsComponent(const FObjectInitializer& ObjectInitializer);

};

