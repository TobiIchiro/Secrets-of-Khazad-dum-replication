#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizationSoftObjRow.h"
#include "MaterialSlotEntry.h"
#include "CustomizationBackpackColorData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationBackpackColorData : public FCustomizationSoftObjRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UI_Icon_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialSlotEntry> OverrideMaterials;
    
    MORIA_API FCustomizationBackpackColorData();
};

