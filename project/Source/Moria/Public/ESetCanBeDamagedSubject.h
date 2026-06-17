#pragma once
#include "CoreMinimal.h"
#include "ESetCanBeDamagedSubject.generated.h"

UENUM(BlueprintType)
enum class ESetCanBeDamagedSubject : uint8 {
    Both,
    Self,
    Target,
};

