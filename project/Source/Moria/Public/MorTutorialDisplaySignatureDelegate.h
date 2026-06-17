#pragma once
#include "CoreMinimal.h"
#include "MorTutorialRowHandle.h"
#include "MorTutorialDisplaySignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorTutorialDisplaySignature, const FMorTutorialRowHandle&, TutorialRowHandle, bool, IsNew);

