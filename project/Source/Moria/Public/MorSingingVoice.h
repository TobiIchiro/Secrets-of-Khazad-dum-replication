#pragma once
#include "CoreMinimal.h"
#include "MorSingingVoice.generated.h"

class UAkStateValue;

USTRUCT(BlueprintType)
struct FMorSingingVoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* Silent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* Audible;
    
    MORIA_API FMorSingingVoice();
};

