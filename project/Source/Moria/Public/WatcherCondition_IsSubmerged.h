#pragma once
#include "CoreMinimal.h"
#include "WatcherCondition.h"
#include "WatcherCondition_IsSubmerged.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherCondition_IsSubmerged : public UWatcherCondition {
    GENERATED_BODY()
public:
    UWatcherCondition_IsSubmerged();

};

