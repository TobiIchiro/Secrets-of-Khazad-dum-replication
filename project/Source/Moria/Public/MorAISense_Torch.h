#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense_Sight.h"
#include "MorAISense_Torch.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorAISense_Torch : public UAISense_Sight {
    GENERATED_BODY()
public:
    UMorAISense_Torch();

};

