#pragma once
#include "CoreMinimal.h"
#include "MorTutorialRowHandle.h"
#include "MorCheckmarkTutorialItemDisplaySignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorCheckmarkTutorialItemDisplaySignature, const FMorTutorialRowHandle&, TutorialRowHandle, const int32, TutorialItemIndex);

