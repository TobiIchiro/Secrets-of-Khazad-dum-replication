#pragma once
#include "CoreMinimal.h"
#include "MoriaProjectile.h"
#include "MoriaProjectileShadow.generated.h"

class UMorShadowFogEmitterComponent;
class UMorShadowNiagaraComponent;
class UMorShadowProximityFXComponent;

UCLASS(Blueprintable)
class MORIA_API AMoriaProjectileShadow : public AMoriaProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorShadowFogEmitterComponent* EmitterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorShadowProximityFXComponent* ProximityFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorShadowNiagaraComponent* ShadowNiagaraComponent;
    
    AMoriaProjectileShadow(const FObjectInitializer& ObjectInitializer);

};

