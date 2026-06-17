#pragma once
#include "CoreMinimal.h"
#include "EMorLightProxyPreviewMode.generated.h"

UENUM(BlueprintType)
enum class EMorLightProxyPreviewMode : uint8 {
    ShowAll,
    ShowOnlyLightOnActors,
    ShowOnlyLightOffActors,
};

