#pragma once
#include "CoreMinimal.h"
#include "MorShadowFogActor.h"
#include "MorShadowFogEmitterActor.generated.h"

class UMorShadowFogEmitterComponent;
class UMorShadowNiagaraComponent;
class UMorShadowProximityFXComponent;

UCLASS(Blueprintable)
class MORIA_API AMorShadowFogEmitterActor : public AMorShadowFogActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorShadowFogEmitterComponent* EmitterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorShadowProximityFXComponent* ShadowProximityFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorShadowNiagaraComponent* ShadowNiagaraComponent;
    
    AMorShadowFogEmitterActor(const FObjectInitializer& ObjectInitializer);

};

