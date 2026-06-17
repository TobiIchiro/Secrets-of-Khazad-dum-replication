#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h"
#include "Templates/SubclassOf.h"
#include "MorAIEnvQueryTest_Pathfinding_OverrideNavData.generated.h"

class ANavigationData;

UCLASS(Blueprintable)
class MORIA_API UMorAIEnvQueryTest_Pathfinding_OverrideNavData : public UEnvQueryTest_Pathfinding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANavigationData> OverrideNavDataClass;
    
public:
    UMorAIEnvQueryTest_Pathfinding_OverrideNavData();

};

