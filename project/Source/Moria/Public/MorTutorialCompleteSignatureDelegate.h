#pragma once
#include "CoreMinimal.h"
#include "MorTutorialRowHandle.h"
#include "MorTutorialCompleteSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorTutorialCompleteSignature, const FMorTutorialRowHandle&, TutorialRowHandle);

