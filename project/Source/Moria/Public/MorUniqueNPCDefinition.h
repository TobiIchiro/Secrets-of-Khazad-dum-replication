#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FGKTableRowBase.h"
#include "MorUniqueNPCDefinition.generated.h"

class AMorCharacter;

USTRUCT(BlueprintType)
struct MORIA_API FMorUniqueNPCDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorCharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AppearancePreset;
    
    FMorUniqueNPCDefinition();
};

