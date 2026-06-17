#pragma once
#include "CoreMinimal.h"
#include "SubtitleEventParameters.h"
#include "MorVOPostedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorVOPostedSignature, FSubtitleEventParameters, SubtitleEventParam);

