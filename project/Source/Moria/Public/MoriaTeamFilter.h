#pragma once
#include "CoreMinimal.h"
#include "GameplayTargetDataFilter.h"
#include "MoriaTeamFilter.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMoriaTeamFilter : public FGameplayTargetDataFilter {
    GENERATED_BODY()
public:
    FMoriaTeamFilter();
};

