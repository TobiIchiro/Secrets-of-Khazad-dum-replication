#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect_LookAt.h"
#include "MorActionEffect_EyeLevelLookAt.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_EyeLevelLookAt : public UFGKActionEffect_LookAt {
    GENERATED_BODY()
public:
    UMorActionEffect_EyeLevelLookAt();

};

