#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKAIPatrolComponent.generated.h"

class AFGKAIController;
class AFGKAIPatrolPath;
class AFGKAIPatrolPoint;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKAIPatrolComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKAIPatrolPath* PatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKAIController* ControllerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKAIPatrolPoint* OccupiedPatrolPoint;
    
public:
    UFGKAIPatrolComponent(const FObjectInitializer& ObjectInitializer);

};

