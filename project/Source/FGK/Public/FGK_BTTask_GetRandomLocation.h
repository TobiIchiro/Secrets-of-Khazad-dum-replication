#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "Templates/SubclassOf.h"
#include "FGK_BTTask_GetRandomLocation.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable)
class FGK_API UFGK_BTTask_GetRandomLocation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> Filter;
    
    UFGK_BTTask_GetRandomLocation();

};

