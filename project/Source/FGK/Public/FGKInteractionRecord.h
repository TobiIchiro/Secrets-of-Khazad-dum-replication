#pragma once
#include "CoreMinimal.h"
#include "FGKInteractionRecord.generated.h"

class AFGKBaseCharacter;

USTRUCT(BlueprintType)
struct FGK_API FFGKInteractionRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Character;
    
    FFGKInteractionRecord();
};

