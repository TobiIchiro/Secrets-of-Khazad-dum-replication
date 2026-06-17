#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorDestructibleActor.generated.h"

class UDestructibleComponent;

UCLASS(Blueprintable)
class MORIA_API AMorDestructibleActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleComponent* DestructibleComponent;
    
    AMorDestructibleActor(const FObjectInitializer& ObjectInitializer);

};

