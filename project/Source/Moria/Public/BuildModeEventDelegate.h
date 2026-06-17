#pragma once
#include "CoreMinimal.h"
#include "EBuildMode.h"
#include "BuildModeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuildModeEvent, EBuildMode, Mode);

