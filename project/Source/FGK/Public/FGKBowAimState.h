#pragma once
#include "CoreMinimal.h"
#include "FGKAimState_RangedWeapon.h"
#include "FGKBowAimState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKBowAimState : public UFGKAimState_RangedWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHandIKOnBow;
    
    UFGKBowAimState();

};

