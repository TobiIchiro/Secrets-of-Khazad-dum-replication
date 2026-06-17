#pragma once
#include "CoreMinimal.h"
#include "EFeatureFlag.generated.h"

UENUM(BlueprintType)
enum class EFeatureFlag : uint8 {
    Feature_NewsFeed,
    Feature_BugReporter,
};

