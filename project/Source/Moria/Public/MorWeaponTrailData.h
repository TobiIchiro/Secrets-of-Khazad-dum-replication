#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MorWeaponTrailColors.h"
#include "MorWeaponTrailData.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorWeaponTrailData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMorWeaponTrailColors> WeaponTrailColorConfig;
    
    FMorWeaponTrailData();
};

