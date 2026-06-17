#pragma once
#include "CoreMinimal.h"
#include "MorFXManager.h"
#include "ShadowDispelData.h"
#include "Templates/SubclassOf.h"
#include "MorShadowFluidManager.generated.h"

class AActor;
class AMorFluidNinjaBaseActor;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class MORIA_API AMorShadowFluidManager : public AMorFXManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorFluidNinjaBaseActor> FluidNinjaBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugDraw;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShadowDispelData> DispelInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorFluidNinjaBaseActor* FluidNinjaActor;
    
public:
    AMorShadowFluidManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveLightDispellingActorById(const int32 IdIn);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLightDispellingActor(AActor* ActorIn);
    
    UFUNCTION(BlueprintCallable)
    int32 AddLightDispellingActor(AActor* ActorIn, const float StartRadius, const float EndRadius);
    
};

