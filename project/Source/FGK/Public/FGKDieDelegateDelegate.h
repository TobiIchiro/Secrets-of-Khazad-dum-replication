#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FGKDieDelegateDelegate.generated.h"

class AActor;
class AController;
class UDamageType;
class UFGKHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFGKDieDelegate, UFGKHealthComponent*, HealthComp, TSubclassOf<UDamageType>, DamageType, AController*, InstigatedBy, AActor*, DamageCauser);

