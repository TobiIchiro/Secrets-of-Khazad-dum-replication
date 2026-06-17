#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig_Sight.h"
#include "MorAISenseConfig_Torch.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAISenseConfig_Torch : public UAISenseConfig_Sight {
    GENERATED_BODY()
public:
    UMorAISenseConfig_Torch();

};

