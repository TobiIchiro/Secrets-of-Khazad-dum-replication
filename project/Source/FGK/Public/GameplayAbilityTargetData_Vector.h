#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayAbilityTargetData.h"
#include "GameplayAbilityTargetData_Vector.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FGameplayAbilityTargetData_Vector : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Vector;
    
    FGameplayAbilityTargetData_Vector();
};

