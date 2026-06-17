#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorBGMDefinition.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct MORIA_API FMorBGMDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndEvent;
    
    FMorBGMDefinition();
};

