#pragma once
#include "CoreMinimal.h"
#include "CustomizationSoftObjRow.h"
#include "CustomizationTattooData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FCustomizationTattooData : public FCustomizationSoftObjRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> TattooTexture;
    
    MORIA_API FCustomizationTattooData();
};

