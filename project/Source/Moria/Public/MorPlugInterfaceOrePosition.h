#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorPlugInterfaceOrePosition.generated.h"

USTRUCT(BlueprintType)
struct FMorPlugInterfaceOrePosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D OrePosition0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D OrePosition1;
    
    MORIA_API FMorPlugInterfaceOrePosition();
};

