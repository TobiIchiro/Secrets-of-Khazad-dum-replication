#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPatrolPathType.h"
#include "FGKAIPatrolPath.generated.h"

class AFGKAIPatrolPoint;

UCLASS(Blueprintable)
class FGK_API AFGKAIPatrolPath : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFGKAIPatrolPoint*> PatrolPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatrolPathType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DrawColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanStartAnywhere: 1;
    
public:
    AFGKAIPatrolPath(const FObjectInitializer& ObjectInitializer);

};

