#pragma once
#include "CoreMinimal.h"
#include "EMorSubtitleOptions.h"
#include "OnSubtitleVisSettingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubtitleVisSettingChanged, EMorSubtitleOptions, ModeOption);

