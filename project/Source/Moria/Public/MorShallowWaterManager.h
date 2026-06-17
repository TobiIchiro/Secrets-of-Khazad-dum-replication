#pragma once
#include "CoreMinimal.h"
#include "MorFXManager.h"
#include "Templates/SubclassOf.h"
#include "MorShallowWaterManager.generated.h"

class AMorFluidNinjaBaseActor;

UCLASS(Blueprintable)
class MORIA_API AMorShallowWaterManager : public AMorFXManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorFluidNinjaBaseActor> FluidNinjaBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugDraw;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorFluidNinjaBaseActor* FluidNinjaActor;
    
public:
    AMorShallowWaterManager(const FObjectInitializer& ObjectInitializer);

};

