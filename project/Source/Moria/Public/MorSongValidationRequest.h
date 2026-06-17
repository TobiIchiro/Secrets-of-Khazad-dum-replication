#pragma once
#include "CoreMinimal.h"
#include "MorSongValidationRequest.generated.h"

class UVoiceComponent;

USTRUCT(BlueprintType)
struct FMorSongValidationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoiceComponent* TargetComponent;
    
    MORIA_API FMorSongValidationRequest();
};

