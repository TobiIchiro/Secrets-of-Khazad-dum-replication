#pragma once
#include "CoreMinimal.h"
#include "CustomizationSoftObjRow.h"
#include "SoftModularOutfitEntry.h"
#include "CustomizationCraftItemData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationCraftItemData : public FCustomizationSoftObjRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftModularOutfitEntry OutfitItemEntry;
    
    MORIA_API FCustomizationCraftItemData();
};

