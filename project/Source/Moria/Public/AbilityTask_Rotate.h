#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask.h"
#include "AbilityTask_Rotate.generated.h"

class AActor;
class UAbilityTask_Rotate;
class UGameplayAbility;

UCLASS(Blueprintable)
class MORIA_API UAbilityTask_Rotate : public UAbilityTask {
    GENERATED_BODY()
public:
    UAbilityTask_Rotate();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Rotate* CreateRotateTaskLocation(UGameplayAbility* OwningAbility, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Rotate* CreateRotateTaskActor(UGameplayAbility* OwningAbility, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Rotate* CreateRotateTask(UGameplayAbility* OwningAbility, FRotator TargetRotation);
    
};

