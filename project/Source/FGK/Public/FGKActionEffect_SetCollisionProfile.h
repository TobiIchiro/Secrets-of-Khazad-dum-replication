#pragma once
#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "FGKActionEffect.h"
#include "FGKActionEffect_SetCollisionProfile.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKActionEffect_SetCollisionProfile : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName CollisionProfile;
    
public:
    UFGKActionEffect_SetCollisionProfile();

};

