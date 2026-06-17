#pragma once
#include "CoreMinimal.h"
#include "CustomizationSoftObjRow.h"
#include "CustomizationScarData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FCustomizationScarData : public FCustomizationSoftObjRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> ScarMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> ScarNormal;
    
    MORIA_API FCustomizationScarData();
};

