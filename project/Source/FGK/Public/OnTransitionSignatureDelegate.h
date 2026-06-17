#pragma once
#include "CoreMinimal.h"
#include "OnTransitionSignatureDelegate.generated.h"

class UFGKState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTransitionSignature, UFGKState*, Sender, UFGKState*, LastNode, UFGKState*, NextNode);

