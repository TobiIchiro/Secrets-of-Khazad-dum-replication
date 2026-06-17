#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorZoneTemplateBubbleEntry.h"
#include "MorZoneTemplateDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneTemplateDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorZoneTemplateBubbleEntry> Bubbles;
    
    FMorZoneTemplateDefinition();
};

