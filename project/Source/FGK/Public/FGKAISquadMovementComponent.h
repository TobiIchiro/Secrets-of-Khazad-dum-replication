#pragma once
#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "FGKAISquadMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKAISquadMovementComponent : public UNavMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SquadSpeed;
    
public:
    UFGKAISquadMovementComponent(const FObjectInitializer& ObjectInitializer);

};

