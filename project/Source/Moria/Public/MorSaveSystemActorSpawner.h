#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorSaveSystemActorSpawner.generated.h"

UCLASS(Blueprintable, Within=MorSaveSystemLevelRecordRuntime)
class MORIA_API UMorSaveSystemActorSpawner : public UObject {
    GENERATED_BODY()
public:
    UMorSaveSystemActorSpawner();

};

