#pragma once
#include "CoreMinimal.h"
#include "MorReplicatedManager.h"
#include "MorGameplayLightManager.generated.h"

class UCurveFloat;
class UMorGameplayLightProducerComponent;

UCLASS(Blueprintable)
class MORIA_API AMorGameplayLightManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightSourcesLightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowSourcesNegativeLightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalLightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalLightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ProxyLightFalloffCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UMorGameplayLightProducerComponent*> Producers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DefaultAmbientLightCurve;
    
public:
    AMorGameplayLightManager(const FObjectInitializer& ObjectInitializer);

};

