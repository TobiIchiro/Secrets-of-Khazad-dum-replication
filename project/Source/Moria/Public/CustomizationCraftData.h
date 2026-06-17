#pragma once
#include "CoreMinimal.h"
#include "CustomizationSoftObjRow.h"
#include "SoftModularOutfitEntry.h"
#include "CustomizationCraftData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationCraftData : public FCustomizationSoftObjRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftModularOutfitEntry> DefaultOutfit;
    
    MORIA_API FCustomizationCraftData();
};

