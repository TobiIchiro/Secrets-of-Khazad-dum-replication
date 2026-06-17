#pragma once
#include "CoreMinimal.h"
#include "MorAIShadowDragonHurtDelegate.generated.h"

class UMorAIShadowDragonComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorAIShadowDragonHurt, UMorAIShadowDragonComponent*, ShadowDragonComponent);

