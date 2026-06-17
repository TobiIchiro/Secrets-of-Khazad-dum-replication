#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EMorSurface.h"
#include "EMorSurfaceCategory.h"
#include "MorDamageSourceInterface.h"
#include "MorItemBase.h"
#include "MorTierInterface.h"
#include "MorWeaponRowHandle.h"
#include "MorWeapon.generated.h"

class AActor;

UCLASS(Blueprintable)
class MORIA_API AMorWeapon : public AMorItemBase, public IMorDamageSourceInterface, public IMorTierInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWeaponRowHandle RowHandle;
    
    AMorWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGlowMat(float TargetGlow, float CurrentGlow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHit(AActor* Attacker, AActor* Victim, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    EMorSurface GetSurfaceType(TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    
    UFUNCTION(BlueprintCallable)
    EMorSurfaceCategory GetSurfaceCategory(TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseDamage() const;
    

    // Fix for true pure virtual functions not being implemented
};

