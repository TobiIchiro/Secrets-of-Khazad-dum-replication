#pragma once
#include "CoreMinimal.h"
#include "RequirementDetails.generated.h"

USTRUCT(BlueprintType)
struct FRequirementDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Thing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeededAmount;
    
    FGK_API FRequirementDetails();
};

