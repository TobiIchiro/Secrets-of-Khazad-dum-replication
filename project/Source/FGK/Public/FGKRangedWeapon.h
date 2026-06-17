#pragma once
#include "CoreMinimal.h"
#include "FGKWeapon.h"
#include "Templates/SubclassOf.h"
#include "FGKRangedWeapon.generated.h"

class AFGKProjectile;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class FGK_API AFGKRangedWeapon : public AFGKWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChargeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AFGKProjectile>> SupportedProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFGKProjectile> CurrentProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ProjectileLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFGKProjectile> LastProjectileFired;
    
public:
    AFGKRangedWeapon(const FObjectInitializer& ObjectInitializer);

};

