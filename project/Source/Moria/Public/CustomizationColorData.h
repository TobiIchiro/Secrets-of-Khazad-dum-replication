#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorCustomizationTableRowBase.h"
#include "CustomizationColorData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationColorData : public FMorCustomizationTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    MORIA_API FCustomizationColorData();
};

