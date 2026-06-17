#pragma once
#include "CoreMinimal.h"
#include "MorBreakableAttachmentProperties.h"
#include "MorLevelBreakableAttachmentDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorLevelBreakableAttachmentDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMorBreakableAttachmentProperties> Attachments;
    
    FMorLevelBreakableAttachmentDefinition();
};

