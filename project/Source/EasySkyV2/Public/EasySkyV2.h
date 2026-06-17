#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EasySkyV2.generated.h"

class ATemperatureZone;
class UDirectionalLightComponent;
class UMaterial;
class UMaterialFunction;
class UMaterialParameterCollectionInstance;
class USceneComponent;
class USkyLightComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class EASYSKYV2_API AEasySkyV2 : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enableEditorTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool realTimeDynamicWeatherInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUpdateTemperatureTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCollisionFloorLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionFloorLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionFloorFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTemperatureDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDrawOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowStartTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowBlendSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATemperatureZone*> TemperatureZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTargetTemperatureVolumes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TickCounter;
    
public:
    AEasySkyV2(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SortTemperatureZones();
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogGridPixelSize(int32 VolumetricFogGridPixelSize);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceSoftAngle(UDirectionalLightComponent* DirectionalLight, float SourceSoftAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTargetSize(UTextureRenderTarget2D* RenderTarget, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRealTimeCapture(USkyLightComponent* SkyLightComponent, bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLightComponentProperties(UDirectionalLightComponent* Sunlight, UDirectionalLightComponent* Moonlight, UDirectionalLightComponent* MovableThunderLight, UDirectionalLightComponent* StationaryThunderLight);
    
    UFUNCTION(BlueprintCallable)
    void SetConsoleVariable(const FString& Property, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectionParameterScalar(UMaterialParameterCollectionInstance* CollectionInstance, FName ParameterName, float ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void RefreshSceneComponent(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWithEditor() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetViewLocation();
    
    UFUNCTION(BlueprintCallable)
    void CreateTextureFrom32BitFloat(UTextureRenderTarget2D* RenderTarget, TArray<float> Data, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    bool CreateTemperatureTexture();
    
    UFUNCTION(BlueprintCallable)
    void callAddRemoveTemperatureZone(const bool Add, const ATemperatureZone* TemperatureZoneActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintEditorTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void AddRemoveTemperatureZoneFunc(ATemperatureZone* TemperatureZone, bool Add);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddRemoveTemperatureZone(const bool Add, const ATemperatureZone* TemperatureZoneActor);
    
    UFUNCTION(BlueprintCallable)
    void AddMaterialFunction(UMaterial* mat, UMaterialFunction* MaterialFunction, FName FunctionInputName, FName FunctionOutputName);
    
};

