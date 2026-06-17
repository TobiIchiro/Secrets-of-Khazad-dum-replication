#pragma once
#include "CoreMinimal.h"
#include "EasySkyV2.h"
#include "MorEasySky.generated.h"

class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class USkyAtmosphereComponent;
class USkyLightComponent;
class UVolumetricCloudComponent;

UCLASS(Blueprintable)
class MORIA_API AMorEasySky : public AEasySkyV2 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* SunlightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* MoonlightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* HeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyLightComponent* SkyLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVolumetricCloudComponent* VolumetricCloudComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyAtmosphereComponent* SkyAtmosphereComponent;
    
public:
    AMorEasySky(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWeatherLocalVisibility(bool bVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupLightingComponents(UDirectionalLightComponent* InSunlight, UDirectionalLightComponent* InMoonlight, UExponentialHeightFogComponent* InHeightFog, USkyLightComponent* InSkylight, UVolumetricCloudComponent* InVolumetricClouds, USkyAtmosphereComponent* InSkyAtmosphere);
    
    UFUNCTION(BlueprintCallable)
    void SetStartingTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInternalTime(int32 Milliseconds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBlendTimeToZero(bool bInBlendTimeZero);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEditorModePure() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInEditorMode();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DynamicWeatherScenariosEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWeatherScenarioToThunderStorm();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWeatherScenarioToThunderRain();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWeatherScenarioToSunny();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWeatherScenarioToRain();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWeatherScenarioToMediumClouded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWeatherScenarioToHeavyRain();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWeatherScenarioToFoggy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWeatherScenarioToClouded();
    
};

