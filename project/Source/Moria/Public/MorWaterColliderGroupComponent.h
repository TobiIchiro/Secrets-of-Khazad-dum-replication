#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EWaterParticleEmitterType.h"
#include "EWaterTriggerBoxCategory.h"
#include "MorWaterColliderBoneInfo.h"
#include "WaterColliderEventsGroup.h"
#include "MorWaterColliderGroupComponent.generated.h"

class AMorWaterColliderTriggerBoxManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorWaterColliderGroupComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinColliderSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxColliderSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialTriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaterParticleEmitterType EmitterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWaterTriggerBoxCategory, FWaterColliderEventsGroup> EventAssetsByCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorWaterColliderBoneInfo> ConfiguredBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAllowedActiveVisualEffects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorWaterColliderTriggerBoxManager* WaterColliderTriggerBoxManager;
    
public:
    UMorWaterColliderGroupComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterSkeletalMeshUpdated();
    
};

