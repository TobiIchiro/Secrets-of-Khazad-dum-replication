#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "WorldPlaybackElement.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class MORIA_API AWorldPlaybackElement : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeakScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FinalMaterial;
    
    AWorldPlaybackElement(const FObjectInitializer& ObjectInitializer);

};

