#pragma once
#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "MorNavigationSystemConfig.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MORIA_API UMorNavigationSystemConfig : public UNavigationSystemModuleConfig {
    GENERATED_BODY()
public:
    UMorNavigationSystemConfig();

};

