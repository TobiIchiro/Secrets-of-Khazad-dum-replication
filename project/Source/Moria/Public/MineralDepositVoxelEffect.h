#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MineralDepositVoxelEffect.generated.h"

class UMaterialInterface;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct MORIA_API FMineralDepositVoxelEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RemovalEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DebrisEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ParticleMeshMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Positions;
    
public:
    FMineralDepositVoxelEffect();
};

