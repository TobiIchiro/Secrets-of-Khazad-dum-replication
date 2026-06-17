#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotify.h"
#include "MorAnimNotify_Projectile.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class MORIA_API UMorAnimNotify_Projectile : public UFGKAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLaunch;
    
public:
    UMorAnimNotify_Projectile();

};

