#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorWaterColliderTriggerBoxActor.generated.h"

class UMorWaterColliderTriggerBoxComp;

UCLASS(Blueprintable)
class MORIA_API AMorWaterColliderTriggerBoxActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorWaterColliderTriggerBoxComp* ColliderTriggerBoxComp;
    
    AMorWaterColliderTriggerBoxActor(const FObjectInitializer& ObjectInitializer);

};

