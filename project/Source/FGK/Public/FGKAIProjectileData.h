#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FGKAIProjectileData.generated.h"

class AFGKProjectile;

USTRUCT(BlueprintType)
struct FFGKAIProjectileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFGKProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileInitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileBaseDamage;
    
    FGK_API FFGKAIProjectileData();
};

