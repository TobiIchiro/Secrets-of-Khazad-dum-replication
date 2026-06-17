#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorWeaponTrailColors.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorWeaponTrailColors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ChargedColor;
    
    FMorWeaponTrailColors();
};

