#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EESTemperatureType.h"
#include "ESVolumeType.h"
#include "TemperatureZone.generated.h"

class AEasySkyV2;
class ATemperatureZone;
class UBoxComponent;
class USceneComponent;
class USphereComponent;

UCLASS(Blueprintable)
class ATemperatureZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESVolumeType VolumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EESTemperatureType TemperatureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEasySkyV2* EasySkyActor;
    
    ATemperatureZone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void callAddRemoveTemperatureZone(bool Add, ATemperatureZone* TemperatureZone);
    
};

