#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorIsoMapHighlightStyle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorIsoMapHighlightStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Tint;
    
    FMorIsoMapHighlightStyle();
};

