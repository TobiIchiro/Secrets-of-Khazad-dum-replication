#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "Templates/SubclassOf.h"
#include "FGKAIPatrolPoint.generated.h"

class AFGKAIController;
class UFGKState;

UCLASS(Blueprintable)
class FGK_API AFGKAIPatrolPoint : public ATargetPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFGKAIController*> OccupyingAgents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumOccupyingAgents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKState> InsertBehaviorFSMClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKState> OverrideBehaviorFSMClass;
    
public:
    AFGKAIPatrolPoint(const FObjectInitializer& ObjectInitializer);

};

