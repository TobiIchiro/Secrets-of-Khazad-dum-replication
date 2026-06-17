#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ZoneColor.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FZoneColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Value;
    
    FZoneColor();
};

