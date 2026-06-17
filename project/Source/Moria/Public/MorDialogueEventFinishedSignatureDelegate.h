#pragma once
#include "CoreMinimal.h"
#include "EMorDialogueEventStatus.h"
#include "MorDialogueEventFinishedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorDialogueEventFinishedSignature, EMorDialogueEventStatus, DialogueEventStatus);

