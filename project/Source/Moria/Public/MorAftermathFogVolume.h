#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MorAftermathFogVolume.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class MORIA_API AMorAftermathFogVolume : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIntensityDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FogMID;
    
    AMorAftermathFogVolume(const FObjectInitializer& ObjectInitializer);

};

