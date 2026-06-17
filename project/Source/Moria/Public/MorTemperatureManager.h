#pragma once
#include "CoreMinimal.h"
#include "MorReplicatedManager.h"
#include "MorTemperatureManager.generated.h"

class UMorThresholdEffectComponent;

UCLASS(Blueprintable)
class MORIA_API AMorTemperatureManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UMorThresholdEffectComponent*> TemperatureComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TemperatureUpdateInterval;
    
public:
    AMorTemperatureManager(const FObjectInitializer& ObjectInitializer);

};

