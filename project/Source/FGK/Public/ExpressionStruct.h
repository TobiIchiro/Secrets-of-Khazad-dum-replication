#pragma once
#include "CoreMinimal.h"
#include "EComparison.h"
#include "EExpressionCppPodTypes.h"
#include "ExpressionStruct.generated.h"

USTRUCT(BlueprintType)
struct FExpressionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparison ComparisonOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImmediateValue;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EExpressionCppPodTypes PropType;
    
    FGK_API FExpressionStruct();
};

