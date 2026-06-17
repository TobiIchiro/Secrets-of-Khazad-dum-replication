#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FGKHealthModifiedDelegateDelegate.generated.h"

class AActor;
class AController;
class UDamageType;
class UFGKHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FFGKHealthModifiedDelegate, UFGKHealthComponent*, HealthComp, float, Health, float, HealthDelta, TSubclassOf<UDamageType>, DamageType, AController*, InstigatedBy, AActor*, DamageCauser);

