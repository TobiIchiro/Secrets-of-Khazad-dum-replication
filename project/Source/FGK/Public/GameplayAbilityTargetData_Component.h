#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "GameplayAbilityTargetData_Component.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FGK_API FGameplayAbilityTargetData_Component : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> Component;
    
    FGameplayAbilityTargetData_Component();
};

