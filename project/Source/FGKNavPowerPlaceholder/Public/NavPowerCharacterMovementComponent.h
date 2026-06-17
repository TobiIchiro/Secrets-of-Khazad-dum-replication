#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NavPowerCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGKNAVPOWERPLACEHOLDER_API UNavPowerCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UNavPowerCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

};

