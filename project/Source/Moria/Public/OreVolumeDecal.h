#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OreVolumeDecal.generated.h"

class UMoriaMineralPropertyAsset;
class UOreVolumeDecalComponent;
class UVolumeTexture;

UCLASS(Blueprintable)
class MORIA_API AOreVolumeDecal : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOreVolumeDecalComponent* PrimaryDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOreVolumeDecalComponent* SecondaryDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoriaMineralPropertyAsset* MineralProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVolumeTexture* OreVolumeTexture;
    
    AOreVolumeDecal(const FObjectInitializer& ObjectInitializer);

};

