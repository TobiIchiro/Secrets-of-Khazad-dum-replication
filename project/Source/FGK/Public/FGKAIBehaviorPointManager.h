#pragma once
#include "CoreMinimal.h"
#include "FGKManager.h"
#include "FGKAIBehaviorPointManager.generated.h"

class UFGKAIBehaviorPointComponent;

UCLASS(Blueprintable)
class FGK_API AFGKAIBehaviorPointManager : public AFGKManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKAIBehaviorPointComponent*> RegisteredBehaviorPoints;
    
public:
    AFGKAIBehaviorPointManager(const FObjectInitializer& ObjectInitializer);

};

