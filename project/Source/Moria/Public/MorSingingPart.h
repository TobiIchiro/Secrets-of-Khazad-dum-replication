#pragma once
#include "CoreMinimal.h"
#include "MorSingingPart.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct FMorSingingPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* NoneVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> Voices;
    
    MORIA_API FMorSingingPart();
};

