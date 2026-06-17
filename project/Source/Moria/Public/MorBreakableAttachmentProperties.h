#pragma once
#include "CoreMinimal.h"
#include "MorBreakableAttachmentProperties.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBreakableAttachmentProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Support;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsConstruction;
    
    FMorBreakableAttachmentProperties();
};

