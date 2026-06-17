#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorIsoMapLayerStyle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorIsoMapLayerStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Tint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MarkersTint[8];
    
    FMorIsoMapLayerStyle();
};

