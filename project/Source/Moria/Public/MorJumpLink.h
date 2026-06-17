#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "MorJumpLink.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorJumpLink : public FNavigationLink {
    GENERATED_BODY()
public:
    FMorJumpLink();
};

