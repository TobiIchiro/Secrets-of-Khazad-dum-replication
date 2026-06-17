#pragma once
#include "CoreMinimal.h"
#include "FGKProjectile.h"
#include "FGKArrow.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKArrow : public AFGKProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifetimeAfterHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PenetrationDistance;
    
public:
    AFGKArrow(const FObjectInitializer& ObjectInitializer);

};

