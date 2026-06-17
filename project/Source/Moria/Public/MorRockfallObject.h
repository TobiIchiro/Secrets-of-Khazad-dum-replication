#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MoriaProjectile.h"
#include "MorRockfallObject.generated.h"

class AActor;
class UAkAudioEvent;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class MORIA_API AMorRockfallObject : public AMoriaProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartFallingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ImpactAudio;
    
    AMorRockfallObject(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int32 I, bool bArg, const FHitResult& HitResult);
    
};

