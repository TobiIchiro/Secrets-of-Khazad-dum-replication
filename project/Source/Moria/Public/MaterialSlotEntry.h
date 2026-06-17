#pragma once
#include "CoreMinimal.h"
#include "MaterialSlotEntry.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialSlotEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialSlot;
    
    MORIA_API FMaterialSlotEntry();
};

