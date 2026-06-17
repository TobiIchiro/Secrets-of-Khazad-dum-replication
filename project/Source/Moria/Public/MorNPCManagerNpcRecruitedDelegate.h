#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorNPCManagerNpcRecruitedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorNPCManagerNpcRecruited, FGuid, NpcGuid);

