#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "GameplayAbilityTargetData_Name.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FGameplayAbilityTargetData_Name : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FGameplayAbilityTargetData_Name();
};

