#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecorationActor.generated.h"

UCLASS(Blueprintable)
class MORIA_API ADecorationActor : public AActor {
    GENERATED_BODY()
public:
    ADecorationActor(const FObjectInitializer& ObjectInitializer);

};

