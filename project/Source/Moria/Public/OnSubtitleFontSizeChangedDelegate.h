#pragma once
#include "CoreMinimal.h"
#include "OnSubtitleFontSizeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubtitleFontSizeChanged, int32, FontSize);

