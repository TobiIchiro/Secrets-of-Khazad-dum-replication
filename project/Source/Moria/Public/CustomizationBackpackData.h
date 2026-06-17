#pragma once
#include "CoreMinimal.h"
#include "CustomizationSoftObjRow.h"
#include "MaterialSlotEntry.h"
#include "CustomizationBackpackData.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FCustomizationBackpackData : public FCustomizationSoftObjRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> BackpackMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialSlotEntry> BackpackMaterials;
    
    MORIA_API FCustomizationBackpackData();
};

