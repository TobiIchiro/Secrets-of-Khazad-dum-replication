#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERowEnabledState.h"
#include "CustomizationOriginPresetUIData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCustomizationOriginPresetUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SelectionOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERowEnabledState EnabledState;
    
    MORIA_API FCustomizationOriginPresetUIData();
};

