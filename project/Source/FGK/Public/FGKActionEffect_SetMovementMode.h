#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FGKActionEffect.h"
#include "FGKActionEffect_SetMovementMode.generated.h"

class UFGKCharacterMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKActionEffect_SetMovementMode : public UFGKActionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
public:
    UFGKActionEffect_SetMovementMode();

private:
    UFUNCTION(BlueprintCallable)
    void SetMovementModeFromTimer(UFGKCharacterMovementComponent* MovementComponent);
    
};

