#pragma once
#include "CoreMinimal.h"
#include "FGKOptionBool.h"
#include "MorTelemetryOption.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorTelemetryOption : public UFGKOptionBool {
    GENERATED_BODY()
public:
    UMorTelemetryOption();

};

