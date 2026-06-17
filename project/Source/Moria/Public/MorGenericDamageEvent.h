#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EReactionSeverity.h"
#include "MorGenericDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorGenericDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReactionSeverity Severity;
    
    FMorGenericDamageEvent();
};

