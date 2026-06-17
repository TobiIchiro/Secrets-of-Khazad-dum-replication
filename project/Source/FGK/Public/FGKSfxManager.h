#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chaos/ChaosEngineInterface.h"
#include "FGKSfxManager.generated.h"

class UAkSwitchValue;

UCLASS(Blueprintable)
class FGK_API AFGKSfxManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, UAkSwitchValue*> SurfaceMap;
    
public:
    AFGKSfxManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkSwitchValue* GetAkSwitchValueForSurface(TEnumAsByte<EPhysicalSurface> Surface) const;
    
};

