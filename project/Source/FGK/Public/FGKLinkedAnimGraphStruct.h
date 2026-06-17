#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FGKLinkedAnimGraphStruct.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FGK_API FFGKLinkedAnimGraphStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GraphTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> Graph;
    
    FFGKLinkedAnimGraphStruct();
};

