#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EModularCharacterSlot.h"
#include "ECustomizationTable.h"
#include "EMeshMorphs.h"
#include "MorphEntry.h"
#include "CustomizationTables.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FCustomizationTables : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECustomizationTable, UDataTable*> DataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMeshMorphs, FMorphEntry> SupportedMorphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EModularCharacterSlot> SupportedBodySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EModularCharacterSlot> SupportedOutfitSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EModularCharacterSlot> SupportedTableSlots;
    
    MORIA_API FCustomizationTables();
};

