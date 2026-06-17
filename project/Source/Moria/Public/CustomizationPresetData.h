#pragma once
#include "CoreMinimal.h"
#include "CharacterCustomizations.h"
#include "MorCustomizationTableRowBase.h"
#include "CustomizationPresetData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationPresetData : public FMorCustomizationTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterCustomizations PresetCharacter;
    
    MORIA_API FCustomizationPresetData();
};

