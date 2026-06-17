#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FGKAIPatrolPointOccupation.generated.h"

class AFGKAIPatrolPoint;
class UFGKBehaviorState;

USTRUCT(BlueprintType)
struct FGK_API FFGKAIPatrolPointOccupation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKBehaviorState> InsertBehaviorFSMClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKAIPatrolPoint* OccupiedPatrolPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    FFGKAIPatrolPointOccupation();
};

